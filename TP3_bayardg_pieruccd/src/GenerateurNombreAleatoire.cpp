#include "GenerateurNombreAleatoire.h"

int GenerateurNombreAleatoire::getDimension() {
    return dimension;
}

GenerateurNombreAleatoire::GenerateurNombreAleatoire() {
    dimension = 0;
}

GenerateurNombreAleatoire::GenerateurNombreAleatoire(int dim) {
    dimension = dim;
}

void GenerateurNombreAleatoire::setDimension(int dim) {
    dimension = dim;
}




