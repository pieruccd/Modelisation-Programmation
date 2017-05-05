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

void GenerateurNombreAleatoire::set_seed(unsigned long new_seed) {
    seed = new_seed;
}

long GenerateurNombreAleatoire::get_seed() {
    return seed;
}

void GenerateurNombreAleatoire::reset_seed() {
    seed = (unsigned long) time(NULL);
}

std::vector<unsigned long> GenerateurNombreAleatoire::generate() {
    std::vector<unsigned long> res;
    std::cout << "ERREUR" << std::endl;
    return res;
}





