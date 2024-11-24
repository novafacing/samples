# Makefile for libcgc

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
INC_DIR := include
INC     := $(wildcard $(INC_DIR)/*.h)

# Build output configuration
BUILD_DIR         := build
BUILD_BIN_DIR     := $(BUILD_DIR)/bin
BUILD_LIB_DIR     := $(BUILD_DIR)/lib
BUILD_OBJ_DIR     := $(BUILD_DIR)/obj
BUILD_INC_DIR     := $(BUILD_DIR)/include
BUILD_OBJ_LIB_DIR := $(BUILD_OBJ_DIR)/lib
BUILD_OBJ_SRC_DIR := $(BUILD_OBJ_DIR)/src

# Build targets
LIB         := libcgc
STATIC_LIB  := $(BUILD_LIB_DIR)/$(LIB).a
SHARED_LIB  := $(BUILD_LIB_DIR)/$(LIB).so
LIB_OBJ     := $(patsubst $(LIB_DIR)/%.c,$(BUILD_OBJ_LIB_DIR)/%.o,$(LIB_SRC))
BIN         := $(BUILD_BIN_DIR)/test
BIN_OBJ     := $(patsubst $(SRC_DIR)/%.c,$(BUILD_OBJ_SRC_DIR)/%.o,$(SRC))
LIB_INCLUDE := $(patsubst $(INC_DIR)/%.h,$(BUILD_INC_DIR)/%.h,$(INC))

# Build configuration
LIB_IFLAGS  := -I$(INC_DIR)
LIB_CFLAGS  += -fPIC
LIB_LDFLAGS += -lm
LIB_WFLAGS  += -Wno-unused-value -Wno-unused-command-line-argument
IFLAGS      := -I$(INC_DIR)
CFLAGS      += -O0 -g
LDFLAGS     += -lm
WFLAGS      +=

# Build and test the targets
all: build test

# Prepare first, then build the targets
build: prep $(BIN) $(SHARED_LIB) $(STATIC_LIB) $(LIB_INCLUDE)

# Prepare build environment (directories)
prep:
	$(MKDIR) -p $(BUILD_LIB_DIR) $(BUILD_BIN_DIR) $(BUILD_OBJ_LIB_DIR) $(BUILD_OBJ_SRC_DIR) $(BUILD_INC_DIR)

# Build shared lib from objects
$(SHARED_LIB): $(LIB_OBJ)
	$(CC) -o $@ -shared $^ $(LIB_CFLAGS) $(LIB_IFLAGS) $(LIB_LDFLAGS) $(LIB_WFLAGS)

# Build static lib from objects
$(STATIC_LIB): $(LIB_OBJ)
	$(AR) rcs $@ $^

# Build binary from objects and static library
$(BIN): $(BIN_OBJ) $(STATIC_LIB)
	$(CC) -o $@ $^ $(CFLAGS) $(IFLAGS) $(LDFLAGS) $(WFLAGS)

# Build library objects from C files
$(BUILD_OBJ_LIB_DIR)/%.o: $(LIB_DIR)/%.c
	$(CC) -c -o $@ $< $(LIB_CFLAGS) $(LIB_IFLAGS) $(LIB_WFLAGS)

# Build binary objects from C files
$(BUILD_OBJ_SRC_DIR)/%.o: $(SRC_DIR)/%.c
	$(CC) -c -o $@ $< $(CFLAGS) $(IFLAGS) $(WFLAGS)

# Copy include files
$(BUILD_INC_DIR)/%.h: $(INC_DIR)/%.h
	$(CP) $< $@

# Test
test: $(BIN)
	$(BIN) > /dev/null

# Remove build artifacts
clean:
	rm -rf $(BUILD_DIR)

.PHONY: all prep build clean