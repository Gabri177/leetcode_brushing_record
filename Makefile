MAKEFLAGS = -s
CPP = c++
FLAG_CPP = -Wall -Wextra -Werror
CPP_STANDARD11 ?= -std=c++11

TARGET_LANG := $(firstword $(MAKECMDGOALS))
SUBFOLDER := $(word 2, $(MAKECMDGOALS))
SUB_OUTPUT := $(wildcard */output */*.gch)

.PHONY: py cpp

new:
	@echo "Creating new folder $(SUBFOLDER)..."
	@mkdir $(SUBFOLDER)
	@printf "class Solution(object):\n\t" > $(SUBFOLDER)/solve.py
	@printf "#include \"./solve.hpp\"\n\n\nint main() {\n\tSolution s;\n\treturn 0;\n}" > $(SUBFOLDER)/main.cpp
	@printf "#include<iostream>\n#include<vector>\n#include<string>\n#include<algorithm>\n#include<numeric>\nusing namespace std;\n\nclass Solution {\npublic:\n\n\n};" > $(SUBFOLDER)/solve.hpp
	@echo "Created new folder $(SUBFOLDER) with solve.py , solve.hpp and main.cpp"

py:
	@if [ -e $(SUBFOLDER)/solve.py ]; then \
		echo "Compiling Python files in folder $(SUBFOLDER)..."; \
		python3 ./$(SUBFOLDER)/solve.py; \
		echo "Compiled Python files in $(SUBFOLDER)"; \
	else \
		echo "No Python file found in $(SUBFOLDER)"; \
	fi
	

cpp:
	@if [ -e $(SUBFOLDER)/main.cpp ]; then \
		echo "Compiling C++ files in folder $(SUBFOLDER) with standard $(CXX_STANDARD)..."; \
		$(CPP) $(FLAG_CPP) $(CPP_STANDARD11) $(SUBFOLDER)/main.cpp -o $(SUBFOLDER)/output; \
		echo "Compiled C++ files in $(SUBFOLDER) to $(SUBFOLDER)/output"; \
		./$(SUBFOLDER)/output; \
		echo "Executed $(SUBFOLDER)/output"; \
	else \
		echo "No C++ file found in $(SUBFOLDER)"; \
	fi
clean:
	@rm -f $(SUB_OUTPUT)
	@echo "Cleaned up !"

%:
	@:
