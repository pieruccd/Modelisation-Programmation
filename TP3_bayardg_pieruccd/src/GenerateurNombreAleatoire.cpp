#include "GenerateurNombreAleatoire.h"
#include <time.h>

int GenerateurNombreAleatoire::getDimension() {
    return dimension;
}

GenerateurNombreAleatoire::GenerateurNombreAleatoire() {
    dimension = 1;
}

GenerateurNombreAleatoire::GenerateurNombreAleatoire(int dim) {
    dimension = dim;
}

void GenerateurNombreAleatoire::setDimension(int dim) {
    dimension = dim;
}

void GenerateurNombreAleatoire::set_seed(int new_seed) {
    seed = new_seed;
}

long GenerateurNombreAleatoire::get_seed() {
    return seed;
}

void GenerateurNombreAleatoire::reset_seed() {
    seed = time(NULL);
}

std::vector<double> GenerateurNombreAleatoire::generate() {
    std::vector<double> res;
    std::cout << "ERREUR" << std::endl;
    return res;
}





