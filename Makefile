CC = gcc
CFLAGS = -Wall -Iinclude

SRC = src/main.c src/customer.c
OUT = bank

all:
	$(CC) $(CFLAGS) $(SRC) -o $(OUT)

run:
	./$(OUT)

clean:
	rm -f $(OUT)