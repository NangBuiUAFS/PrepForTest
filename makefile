# Simple Makefile
CC = gcc
CFLAGS = -Wall -g
TARGET = Test1

#default: "make" = compiles Test1.c -> Test1
all: $(TARGET)
$(TARGET): Test1.c
	$(CC) $(CFLAGS) Test1.c -o $(TARGET)

#run Test1 with input.txt
run: $(TARGET)
	./$(TARGET) < input.txt

clean:
	rm -f $(TARGET)
