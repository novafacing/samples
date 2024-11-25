# Get all immediate subdirectories that contain a Makefile
SUBDIRS := $(patsubst %/Makefile,%,$(wildcard */Makefile))
BROKEN_CHALLENGES :=
BROKEN_CHALLENGES += NRFIN_00016 # Issues with SSE returns

BROKEN_CHALLENGES += KPRCA_00025 # Issues with multiple definition

# This set all has the same problem, g_heap is multiply defined
BROKEN_CHALLENGES += KPRCA_00055 # Issues with multiple definition
BROKEN_CHALLENGES += KPRCA_00056 # Issues with multiple definition
BROKEN_CHALLENGES += KPRCA_00057 # Issues with multiple definition
BROKEN_CHALLENGES += KPRCA_00058 # Issues with multiple definition
BROKEN_CHALLENGES += KPRCA_00059 # Issues with multiple definition
BROKEN_CHALLENGES += KPRCA_00060 # Issues with multiple definition
BROKEN_CHALLENGES += KPRCA_00062 # Issues with multiple definition
BROKEN_CHALLENGES += KPRCA_00064 # Issues with multiple definition
BROKEN_CHALLENGES += KPRCA_00065 # Issues with multiple definition
BROKEN_CHALLENGES += KPRCA_00069 # Issues with multiple definition
BROKEN_CHALLENGES += KPRCA_00071 # Issues with multiple definition
BROKEN_CHALLENGES += KPRCA_00073 # Issues with multiple definition
BROKEN_CHALLENGES += KPRCA_00074 # Issues with multiple definition
BROKEN_CHALLENGES += KPRCA_00079 # Issues with multiple definition
BROKEN_CHALLENGES += KPRCA_00086 # Issues with multiple definition
BROKEN_CHALLENGES += KPRCA_00087 # Issues with multiple definition
BROKEN_CHALLENGES += KPRCA_00088 # Issues with multiple definition
BROKEN_CHALLENGES += KPRCA_00094 # Issues with multiple definition
BROKEN_CHALLENGES += KPRCA_00097 # Issues with multiple definition
BROKEN_CHALLENGES += KPRCA_00099 # Issues with multiple definition
BROKEN_CHALLENGES += KPRCA_00100 # Issues with multiple definition
BROKEN_CHALLENGES += KPRCA_00101 # Issues with multiple definition
BROKEN_CHALLENGES += KPRCA_00102 # Issues with multiple definition
BROKEN_CHALLENGES += KPRCA_00110 # Issues with multiple definition
BROKEN_CHALLENGES += KPRCA_00111 # Issues with multiple definition
BROKEN_CHALLENGES += KPRCA_00112 # Issues with multiple definition
BROKEN_CHALLENGES += KPRCA_00119 # Issues with multiple definition
BROKEN_CHALLENGES += KPRCA_00120 # Issues with multiple definition

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
BROKEN_CHALLENGES += KPRCA_00052 # C++
BROKEN_CHALLENGES += KPRCA_00053 # C++
BROKEN_CHALLENGES += KPRCA_00054 # C++
BROKEN_CHALLENGES += KPRCA_00068 # C++
BROKEN_CHALLENGES += KPRCA_00077 # C++
BROKEN_CHALLENGES += KPRCA_00081 # C++
BROKEN_CHALLENGES += KPRCA_00097 # C++

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

BROKEN_CHALLENGES += KPRCA_00026 # Wacky redefinitions/undefined references

BROKEN_CHALLENGES += KPRCA_00044 # Invalid const indexing


SUBDIRS := $(filter-out $(BROKEN_CHALLENGES),$(SUBDIRS))

# Default target
all: $(SUBDIRS)

# Clean target
clean:
	@for dir in $(SUBDIRS); do \
		echo "Cleaning $$dir..."; \
		$(MAKE) -C $$dir clean; \
	done

# Pattern rule for building subdirectories
$(SUBDIRS):
	@echo "Building $@..."
	@$(MAKE) -C $@ all

# Parallel build support (make -j N)
.PHONY: $(SUBDIRS)

# Pass down any variables defined on the command line
$(SUBDIRS): MAKEOVERRIDES := $(MAKEOVERRIDES)

.PHONY: all clean