CC=clang
CFLAGS=-g -Wall
EXE=stack

all: $(EXE)

%: %.c	
		$(CC) $(CFLAGS) $< -o $@

clean:
		rm -rf *.dSYM *.o $(EXE)
