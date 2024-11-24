AUTHOR_ID  = KPRCA
SERVICE_ID = 00087
CFLAGS     = -O3 -g -Werror -Wno-overlength-strings -Wno-packed -include src/_defines.h
VULN_COUNT = 1


# include /usr/share/cb-testing/cgc-cb.mk
CC = gcc
CXX = g++
LD = ld

BUILD_DIR = build
BIN_DIR = bin
SRCS = $(wildcard src/*.c src/*.cc lib/*.c lib/*.cc)
CXX_SRCS = $(filter %.cc, $(SRCS))

CFLAGS = -Iinclude -Ilib -I/home/novafacing/hub/libcgc/include -nostdinc
LDFLAGS =
LIBS =

# Convert source files to object files
OBJS_ = $(SRCS:.c=.o)
OBJS = $(OBJS_:.cc=.o)
BUILD_OBJS = $(addprefix $(BUILD_DIR)/, $(OBJS))

# Default target
all: build

# Create necessary directories
prep:
	@mkdir -p $(BUILD_DIR)/lib $(BUILD_DIR)/src $(BIN_DIR)

# Build the executable
build: prep $(BIN_DIR)/program

$(BIN_DIR)/program: $(BUILD_OBJS)
	$(if $(CXX_SRCS),$(CXX),$(CC)) $(LDFLAGS) -o $@ $^ $(LIBS)

# Pattern rule for C files
$(BUILD_DIR)/%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<

# Pattern rule for C++ files
$(BUILD_DIR)/%.o: %.cc
	$(CXX) $(CFLAGS) -c -o $@ $<

clean:
	rm -rf $(BUILD_DIR) $(BIN_DIR)

.PHONY: all prep build clean
