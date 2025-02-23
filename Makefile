TARGET = stress

SRC = stress.c
OBJ = $(SRC:.c=.o)

CC = gcc
CFLAGS = -Wall -pthread

all: $(TARGET)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(TARGET): $(OBJ)
	$(CC) $(OBJ) -o $(TARGET) $(CFLAGS)

clean:
	rm -f $(OBJ) $(TARGET)

run: $(TARGET)
	./$(TARGET)
