# Justin Salsbery

SHELL=/bin/bash
.PHONY: all cur run code vim

all: 
	@echo "ERROR: Requires CURRENT_PROGRAM environment variable."
	@echo "Set up like so: export CURRENT_PROGRAM=example_dir/example_prog.c"

cur:
	@echo $(CURRENT_PROGRAM)

run:
ifeq ($(wildcard $(CURRENT_PROGRAM)),)
	@$(MAKE) all
else
	@echo "RUNNING: $(CURRENT_PROGRAM)"
	@gcc -O0 $(CURRENT_PROGRAM) && ./a.out
	@rm -f a.out
endif

code:
ifeq ($(wildcard $(CURRENT_PROGRAM)),)
	@$(MAKE) all
else
	@echo "OPENING: `dirname $(CURRENT_PROGRAM)`"
	@code `dirname $(CURRENT_PROGRAM)`
endif

vim:
ifeq ($(wildcard $(CURRENT_PROGRAM)),)
	@$(MAKE) all
else
	@echo "EDITING: $(CURRENT_PROGRAM)"
	@vim $(CURRENT_PROGRAM)
endif
