#COMPILE PREFIX DETERMINED BY THE USER...

CROSS_COMPILE ?=

#COMPILE

CC = $(CROSS_COMPILE)gcc

#FLAGS OF THE COMPILER

CFLAGS = -Wall -Werror -g

#TARGET

TARGET = writer

#SOURCE FILES

SRCS = writer.c
OBJS = $(SRCS:.c=.o)

# Rule to compile .c into .o
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@
	

# Default target
all: $(TARGET)

# Build target
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)
	
# Clean target
clean: 
	rm -f $(TARGET) $(OBJS)

.PHONY: all clean






