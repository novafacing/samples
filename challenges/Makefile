# Get all immediate subdirectories that contain a Makefile
SUBDIRS := $(patsubst %/Makefile,%,$(wildcard */Makefile))
BROKEN_CHALLENGES :=
BROKEN_CHALLENGES += CROMU_00006 # Issues with SSE returns

BROKEN_CHALLENGES += CROMU_00009 # Issues with multiple definition
BROKEN_CHALLENGES += CROMU_00028 # Issues with multiple definition
BROKEN_CHALLENGES += CROMU_00030 # Issues with multiple definition
BROKEN_CHALLENGES += CROMU_00051 # Issues with multiple definition
BROKEN_CHALLENGES += CROMU_00073 # Issues with multiple definition
BROKEN_CHALLENGES += KPRCA_00025 # Issues with multiple definition

BROKEN_CHALLENGES += CROMU_00021 # C++
BROKEN_CHALLENGES += CROMU_00023 # C++
BROKEN_CHALLENGES += CROMU_00026 # C++
BROKEN_CHALLENGES += CROMU_00042 # C++
BROKEN_CHALLENGES += CROMU_00044 # C++
BROKEN_CHALLENGES += CROMU_00054 # C++
BROKEN_CHALLENGES += CROMU_00061 # C++
BROKEN_CHALLENGES += CROMU_00063 # C++
BROKEN_CHALLENGES += CROMU_00064 # C++
BROKEN_CHALLENGES += CROMU_00066 # C++
BROKEN_CHALLENGES += CROMU_00070 # C++
BROKEN_CHALLENGES += CROMU_00077 # C++
BROKEN_CHALLENGES += CROMU_00082 # C++
BROKEN_CHALLENGES += CROMU_00084 # C++
BROKEN_CHALLENGES += CROMU_00093 # C++

BROKEN_CHALLENGES += CROMU_00063 # Multi-cb
BROKEN_CHALLENGES += CROMU_00093 # Multi-cb
BROKEN_CHALLENGES += EAGLE_00004 # Multi-cb
BROKEN_CHALLENGES += KPRCA_00016 # Multi-cb
BROKEN_CHALLENGES += KPRCA_00024 # Multi-cb
BROKEN_CHALLENGES += KPRCA_00048 # Multi-cb
BROKEN_CHALLENGES += KPRCA_00075 # Multi-cb
BROKEN_CHALLENGES += KPRCA_00093 # Multi-cb
BROKEN_CHALLENGES += KPRCA_00111 # Multi-cb
BROKEN_CHALLENGES += LUNGE_00005 # Multi-cb
BROKEN_CHALLENGES += NRFIN_00006 # Multi-cb
BROKEN_CHALLENGES += NRFIN_00066 # Multi-cb
BROKEN_CHALLENGES += NRFIN_00067 # Multi-cb
BROKEN_CHALLENGES += NRFIN_00072 # Multi-cb
BROKEN_CHALLENGES += YAN01_00009 # Multi-cb

BROKEN_CHALLENGES += KPRCA_00010 # Int conversion


SUBDIRS := $(filter-out $(BROKEN_CHALLENGES),$(SUBDIRS))

# Default target
all: $(SUBDIRS)

# Clean target
clean: $(SUBDIRS:%=clean-%)

# Pattern rule for building subdirectories
$(SUBDIRS):
	@echo "Building $@..."
	@$(MAKE) -C $@ all

# Pattern rule for cleaning subdirectories
clean-%:
	@echo "Cleaning $*..."
	@$(MAKE) -C $* clean

# Parallel build support (make -j N)
.PHONY: $(SUBDIRS)

# Pass down any variables defined on the command line
$(SUBDIRS): MAKEOVERRIDES := $(MAKEOVERRIDES)

# Special handling for command line targets
# Usage: make TARGET=install
ifdef TARGET
$(SUBDIRS):
	@$(MAKE) -C $@ $(TARGET)
endif

# Handle arbitrary targets
%: $(SUBDIRS:%=%-%)
	@true

%-% :
	@$(MAKE) -C $* $(@:$*-%=%)

.PHONY: all clean $(SUBDIRS:%=clean-%)