CC=g++
CFLAGS=-W -Wall
LDFLAGS=
SRC=$(wildcard ./src/*.cpp)
EXEC=Dvector
OBJ=$(SRC:.cpp=.o)

all: $(EXEC)

Dvector: $(OBJ)
	$(CC) -o $@ $^ $(LDFLAGS)

main.o: Dvector.h

%.o: %.
	$(CC) -o $@ -c $< $(CFLAGS)

clean:
	rm -rf src/*.o
