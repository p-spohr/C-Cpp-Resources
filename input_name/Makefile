# -------------------------------
# Simple Makefile with Explanations
# -------------------------------

# 1. Define the compiler to use.
# 'gcc' is the GNU C Compiler, commonly used for C programs.
CC = gcc

# 2. Define compiler flags.
# -Wall : enable all common warnings (helps catch mistakes).
# -g    : include debugging information (useful with gdb).
CFLAGS = -Wall -g

# 3. Define the name of the final executable program.
# This is the file that will be produced after linking.
TARGET = InputName

# 4. List all source files in the project.
# These are the .c files you want to compile.
SRCS = input_name.c

# 5. Automatically generate a list of object files (.o).
# This replaces each .c file with a .o file name.
# Example: main.c → main.o, helper.c → helper.o
OBJS = $(SRCS:.c=.o)

# -------------------------------
# Build Rules
# -------------------------------

# 6. Default target: 'all'
# When you run 'make' with no arguments, this target is built.
# It depends on $(TARGET), so it will build the final program.
# This is a phony target (not a real file). It’s the default when you just run make.
# Running make command without any flags in directory will build program.
all: $(TARGET)

# 7. Rule to build the final executable (LINKING).
# $(TARGET) depends on all object files.
# The command links them together into one program.
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

# 8. Rule to compile each source file into an object file (COMPILATION).
# %.o : %.c means "for any .c file, produce a .o file".
# $< : the first prerequisite (the .c file).
# -c : compile only, don’t link yet.
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# -------------------------------
# Utility Rules
# -------------------------------

# 9. 'clean' target
# This is not a file, but a command to delete build artifacts.
# Running 'make clean' removes all .o files and the executable.
clean:
	rm -f $(OBJS) $(TARGET)


# 10. run target
run:
	.\$(TARGET)

# 11. test print
test:
	@echo "Test Message!"

# Special Syntax Elements
# -------------------------------
# TARGET: PREREQUISITE
# 	COMMAND
# Variables:
# Defined with = and referenced with $(NAME).
# Example: CC = gcc, then use $(CC).
# Pattern rules (%.o: %.c):
# % is a wildcard that matches filenames.
# Saves you from writing separate rules for each file.
# Automatic variables:
# $@ → Target name.
# $< → First prerequisite.
# $^ → All prerequisites.
