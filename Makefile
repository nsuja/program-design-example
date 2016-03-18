CC=gcc
LD=gcc

OBJECTS=./src/main.o \
		./src/dummy.o

HEADERS=./src/dummy.h

HEADERS_PRIV=./src/dummy_priv.h

CFLAGS=-Wall
LDFLAGS=

OUTPUT=example

.phony: clean

$(OUTPUT): $(OBJECTS)
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

clean:
	rm -rf ./src/*.o
	rm -f $(OUTPUT)

$(OBJECTS): %.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@
