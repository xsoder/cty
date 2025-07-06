CC = cc
CFLAGS = $(shell pkg-config --cflags raylib)
LDFLAGS = $(shell pkg-config --libs raylib)

main: cty.c
	$(CC) $(CFLAGS) -o main cty.c $(LDFLAGS)
clean:
	rm -f main
