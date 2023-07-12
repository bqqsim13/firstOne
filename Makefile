CC = gcc
CFLAGS = -Wall -Wextra -std=c99
TARGET = factorial
all: $(TARGET)
$(TARGET): factorial.c
	$(CC) $(CFLAGS) -o $(TARGET) factorial.c
clean:
	rm -f $(TARGET)