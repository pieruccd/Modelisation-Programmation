#include <iostream>
#include "assert.h"
#include "ParkMiller.h"
#include "XorShift.h"
#include "DistributionNormale.h"

int main(void) {
    
    std::cout << "[INFO] Lancement des tests ..." << std::endl;
    GenerateurNombreAleatoire *testGen = new GenerateurNombreAleatoire();
    assert(testGen->getDimension() == 1);
    testGen->setDimension(3);
    assert(testGen->getDimension() == 3);
    GenerateurNombreAleatoire *testGen2 = new GenerateurNombreAleatoire(10);
    assert(testGen2->getDimension() == 10);
    ParkMiller *testParkMiller = new ParkMiller();
    testParkMiller->setDimension(100);
    std::vector<double> test = testParkMiller->generate();
    std::cout << "[INFO] Générateur de Park Miller" << std::endl;
    for (int i = 0; i < test.size(); i++) {
        std::cout << "[INFO] Nombre généré : " << test[i] << std::endl;
    }
    std::cout << "[INFO] Générateur XorShift" << std::endl;
    XorShift *testXorShift = new XorShift();
    testXorShift->setDimension(100);
    std::vector<double> test2 = testXorShift->generate();
    for (int i = 0; i < test2.size(); i++) {
        std::cout << "[INFO] Nombre généré : " << test2[i] << std::endl;
    }
    std::cout << "[INFO] Générateur Loi Normale" << std::endl;
    DistributionNormale *normalTest = new DistributionNormale(0,1);
    normalTest->setDimension(100);
    std::vector<double> normal = normalTest->generate();
        for (int i = 0; i < normal.size(); i++) {
        std::cout << "[INFO] Nombre généré : " << normal[i] << std::endl;
    }

    std::cout << "[INFO] Fin des tests : tout semble s'etre bien passé" << std::endl;
}