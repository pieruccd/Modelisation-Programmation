#include <iostream>
#include "assert.h"
#include "ParkMiller.h"

int main(void) {
    std::cout << "Lancement des tests ..." << std::endl;
    GenerateurNombreAleatoire *testGen = new GenerateurNombreAleatoire();
    assert(testGen->getDimension() == 0);
    testGen->setDimension(3);
    assert(testGen->getDimension() == 3);
    GenerateurNombreAleatoire *testGen2 = new GenerateurNombreAleatoire(10);
    assert(testGen2->getDimension() == 10);
    ParkMiller *testParkMiller =  new ParkMiller();
    assert(testParkMiller->generate() == 36);
    std::cout << "Fin des tests : tout semble s'etre bien passé" << std::endl;
}