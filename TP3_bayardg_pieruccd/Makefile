CC=g++
CFLAGS=-W -Wall
LDFLAGS=
SRC=$(wildcard ./src/*.cpp)
EXEC=GenerateurNombreAleatoire
OBJ=$(SRC:.cpp=.o)

all: $(EXEC)

GenerateurNombreAleatoire: $(OBJ)
	$(CC) -o $@ $^ $(LDFLAGS)

main.o: GenerateurNombreAleatoire.h

%.o: %.
	$(CC) -o $@ -c $< $(CFLAGS)

clean:
	rm -rf src/*.o GenerateurNombreAleatoire
