# Makefile for C examples
CC = gcc
CFLAGS = -Wall -Wextra -std=c11

# Directories
BASICS_DIR = basics
FUNCTIONS_DIR = functions
POINTERS_DIR = pointers
MEMORY_DIR = memory
FILES_DIR = files
ALGORITHMS_DIR = algorithms
STRUCTS_DIR = structs
DATA_STRUCTURES_DIR = data_structures

# Find all .c files
BASICS_SRC = $(wildcard $(BASICS_DIR)/*.c)
FUNCTIONS_SRC = $(wildcard $(FUNCTIONS_DIR)/*.c)
POINTERS_SRC = $(wildcard $(POINTERS_DIR)/*.c)
MEMORY_SRC = $(wildcard $(MEMORY_DIR)/*.c)
FILES_SRC = $(wildcard $(FILES_DIR)/*.c)
ALGORITHMS_SRC = $(wildcard $(ALGORITHMS_DIR)/*.c)
STRUCTS_SRC = $(wildcard $(STRUCTS_DIR)/*.c)
DATA_STRUCTURES_SRC = $(wildcard $(DATA_STRUCTURES_DIR)/*.c)

# Generate output file names
BASICS_OUT = $(BASICS_SRC:.c=.out)
FUNCTIONS_OUT = $(FUNCTIONS_SRC:.c=.out)
POINTERS_OUT = $(POINTERS_SRC:.c=.out)
MEMORY_OUT = $(MEMORY_SRC:.c=.out)
FILES_OUT = $(FILES_SRC:.c=.out)
ALGORITHMS_OUT = $(ALGORITHMS_SRC:.c=.out)
STRUCTS_OUT = $(STRUCTS_SRC:.c=.out)
DATA_STRUCTURES_OUT = $(DATA_STRUCTURES_SRC:.c=.out)

ALL_OUT = $(BASICS_OUT) $(FUNCTIONS_OUT) $(POINTERS_OUT) $(MEMORY_OUT) \
          $(FILES_OUT) $(ALGORITHMS_OUT) $(STRUCTS_OUT) $(DATA_STRUCTURES_OUT)

# Default target
all: $(ALL_OUT)

# Generic rule for compiling .c to .out
%.out: %.c
	$(CC) $(CFLAGS) $< -o $@

# Clean all compiled files
clean:
	rm -f $(ALL_OUT)
	rm -f $(BASICS_DIR)/*.o $(FUNCTIONS_DIR)/*.o $(POINTERS_DIR)/*.o
	rm -f $(MEMORY_DIR)/*.o $(FILES_DIR)/*.o $(ALGORITHMS_DIR)/*.o
	rm -f $(STRUCTS_DIR)/*.o $(DATA_STRUCTURES_DIR)/*.o

.PHONY: all clean
