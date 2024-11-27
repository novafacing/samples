ifeq ($(filter clean,$(MAKECMDGOALS)),)
check_vars := AUTHOR_ID SERVICE_ID LIBCGC_INC_DIR LIBCGC_LIB TOPLEVEL_BUILD_BIN_DIR
$(foreach var,$(check_vars),\
    $(if $($(var)),,$(error $(var) is not set)))
endif

# Build tools
CC    ?= clang
AR    ?= llvm-ar
CP    ?= cp
MKDIR ?= mkdir

# Build sources
LIB_DIR := lib
LIB_SRC := $(wildcard $(LIB_DIR)/*.c)
SRC_DIR := src
SRC     := $(wildcard $(SRC_DIR)/*.c)

# Build output configuration
BUILD_DIR         := build
BUILD_BIN_DIR     := $(BUILD_DIR)/bin
BUILD_LIB_DIR     := $(BUILD_DIR)/lib
BUILD_OBJ_DIR     := $(BUILD_DIR)/obj
BUILD_OBJ_LIB_DIR := $(BUILD_OBJ_DIR)/lib
BUILD_OBJ_SRC_DIR := $(BUILD_OBJ_DIR)/src

# Build targets
NAME         := $(AUTHOR_ID)_$(SERVICE_ID)
STATIC_LIB   := $(BUILD_LIB_DIR)/$(NAME).a
LIB_OBJ      := $(patsubst $(LIB_DIR)/%.c,$(BUILD_OBJ_LIB_DIR)/%.o,$(LIB_SRC))
BIN          := $(BUILD_BIN_DIR)/$(NAME)
BIN_OBJ      := $(patsubst $(SRC_DIR)/%.c,$(BUILD_OBJ_SRC_DIR)/%.o,$(SRC))
LIB_INCLUDE  := $(patsubst $(INC_DIR)/%.h,$(BUILD_INC_DIR)/%.h,$(INC))
TOPLEVEL_BIN := $(TOPLEVEL_BUILD_BIN_DIR)/$(NAME)

# Build configuration
LIB_IFLAGS  += -nostdinc -I$(LIB_DIR) -I$(LIBCGC_INC_DIR)
LIB_CFLAGS  += -fPIC -fno-builtin -Wno-error=unused-but-set-variable
LIB_LDFLAGS += -lm $(LIBCGC_LIB)
LIB_WFLAGS  += -Wno-error=pointer-compare
IFLAGS      += -nostdinc -I$(LIB_DIR) -I$(SRC_DIR) -I$(LIBCGC_INC_DIR)
CFLAGS      += -fno-builtin
LDFLAGS     += -lm $(LIBCGC_LIB)
WFLAGS      += -Wno-error=pointer-compare

# Build the targets
all: build

# Prepare first, then build the targets
build: prep $(TOPLEVEL_BIN)

# Prepare build environment (directories)
prep:
	$(MKDIR) -p $(BUILD_LIB_DIR) $(BUILD_BIN_DIR) $(BUILD_OBJ_LIB_DIR) $(BUILD_OBJ_SRC_DIR)

# Build static lib from objects
$(STATIC_LIB): $(LIB_OBJ)
	$(AR) rcs $@ $^

# Build binary from objects and static library
$(BIN): $(BIN_OBJ) $(STATIC_LIB)
	$(CC) -o $@ $^ $(CFLAGS) $(IFLAGS) $(LDFLAGS) $(WFLAGS)

$(TOPLEVEL_BIN): $(BIN)
	$(CP) $^ $@

# Build library objects from C files
$(BUILD_OBJ_LIB_DIR)/%.o: $(LIB_DIR)/%.c
	$(CC) -c -o $@ $< $(CFLAGS) $(LIB_CFLAGS) $(LIB_IFLAGS) $(LIB_WFLAGS)

# Build binary objects from C files
$(BUILD_OBJ_SRC_DIR)/%.o: $(SRC_DIR)/%.c
	$(CC) -c -o $@ $< $(CFLAGS) $(IFLAGS) $(WFLAGS)

# Remove build artifacts
clean:
	rm -rf $(BUILD_DIR)

.PHONY: all prep build clean
