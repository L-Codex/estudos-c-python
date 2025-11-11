# Makefile for C examples
CC = gcc
CFLAGS = -Wall -Wextra -std=c11

# Find all .c files recursively
SOURCES = $(shell find . -name "*.c")
OBJECTS = $(SOURCES:.c=.out)

# Default target
all: $(OBJECTS)

# Generic rule for compiling .c to .out
%.out: %.c
	$(CC) $(CFLAGS) $< -o $@

# Clean all compiled files
clean:
	find . -name "*.out" -type f -delete
	find . -name "*.o" -type f -delete
	find . -name "dados.txt" -type f -delete

# Test - compile and run a simple test
test: all
	@echo "Compilação concluída com sucesso!"
	@echo "Total de arquivos compilados: $(words $(OBJECTS))"

.PHONY: all clean test
