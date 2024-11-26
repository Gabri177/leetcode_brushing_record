MAKEFLAGS = -s
CPP = c++
FLAG_CPP = -Wall -Wextra -Werror
CPP_STANDARD11 ?= -std=c++11

TARGET_LANG := $(firstword $(MAKECMDGOALS))
SUBFOLDER := $(word 2, $(MAKECMDGOALS))
SUB_OUTPUT := $(wildcard */output */*.gch)

.PHONY: py cpp
py:
	@if [ -e $(SUBFOLDER)/solve.py ]; then \
		echo "Compiling Python files in folder $(SUBFOLDER)..."; \
		python3 ./$(SUBFOLDER)/solve.py; \
	else \
		echo "No Python file found in $(SUBFOLDER)"; \
	fi
	

cpp:
	@if [ -e $(SUBFOLDER)/main.cpp ]; then \
		echo "Compiling C++ files in folder $(SUBFOLDER) with standard $(CXX_STANDARD)..."; \
		$(CPP) $(FLAG_CPP) $(CPP_STANDARD11) $(SUBFOLDER)/main.cpp -o $(SUBFOLDER)/output; \
		echo "Compiled C++ files in $(SUBFOLDER) to $(SUBFOLDER)/output"; \
		./$(SUBFOLDER)/output; \
	else \
		echo "No C++ file found in $(SUBFOLDER)"; \
	fi
clean:
	@rm -f $(SUB_OUTPUT)
	@echo "Cleaned up !"

%:
	@: