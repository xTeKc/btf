CC=clang
CFLAGS=-Wall -Wextra -Werror -O2 -std=c17
LDFLAGS=-lm

SOURCES=main.c
OBJECTS=$(SOURCES:.c=.o)
BIN=btf

all: $(BIN)

$(BIN): $(OBJECTS)
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

.c.o:
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(BIN) $(OBJECTS)
