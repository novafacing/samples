LIBCGC         := libcgc
LIBCGC_LIB_DIR := $(abspath $(LIBCGC)/build/lib)
LIBCGC_LIB     := $(LIBCGC_LIB_DIR)/$(LIBCGC).a
LIBCGC_INC_DIR := $(abspath $(LIBCGC)/build/include)
CHALLENGES     := challenges

all: $(LIBCGC) $(CHALLENGES)

$(LIBCGC):
	$(MAKE) -C $@

$(CHALLENGES): $(LIBCGC)
	$(MAKE) -C $@ LIBCGC_INC_DIR="$(LIBCGC_INC_DIR)" LIBCGC_LIB="$(LIBCGC_LIB)"

clean:
	$(MAKE) -C $(LIBCGC) clean
	$(MAKE) -C $(CHALLENGES) clean LIBCGC_INC_DIR="$(LIBCGC_INC_DIR)" LIBCGC_LIB="$(LIBCGC_LIB)"

.PHONY: all clean $(LIBCGC) $(CHALLENGES)