# Compiler
CC = gcc

# Compilation flags
CFLAGS = -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format

# Source files (update this list based on your existing files)
SRC = _printf.c data_functions.c handle_format.c

EXEC = _printf_test

# Object files (automatically convert .c to .o)
OBJ = $(SRC:.c=.o)

# Test files (should be included in the build for testing)
TEST_SRC = tests/main.c
TEST_OBJ = tests/main.o

# Rule to build and run tests
test: $(OBJ) $(TEST_OBJ)
	$(CC) $(CFLAGS) $(OBJ) $(TEST_OBJ) -o $(EXEC)
	./$(EXEC)

# Rule to clean up compiled files
clean:
	rm -f $(OBJ) $(TEST_OBJ) $(EXEC)
