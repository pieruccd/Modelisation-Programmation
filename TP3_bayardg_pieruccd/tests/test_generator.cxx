#include <iostream>
#include "assert.h"
#include "ParkMiller.h"
#include "XorShift.h"
#include "DistributionNormale.h"
#include "DistributionUniforme.h"
#include <iostream>
#include <fstream>
#include "gtest/gtest.h"

class RandomGenerator: public ::testing::Test {
        protected:
                virtual void SetUp() {
                }

                virtual void TearDown() {
                        // Code here will be called immediately after each test
                        //                         // (right before the destructor).
                                                                 }
                                                                 };
                        
 //   std::cout << "[INFO] Lancement des tests ..." << std::endl;

TEST_F(RandomGenerator,divers){
    GenerateurNombreAleatoire *testGen = new GenerateurNombreAleatoire();
    EXPECT_EQ(testGen->getDimension(),1);
    testGen->setDimension(3);
    EXPECT_EQ(testGen->getDimension(),3);
    GenerateurNombreAleatoire *testGen2 = new GenerateurNombreAleatoire(10);
    EXPECT_EQ(testGen2->getDimension(),10);

}
/*

    // test divers (non statistiques) 

TEST_F(RandomGenerator,ParkMiller){
    ParkMiller *testParkMiller = new ParkMiller();
    testParkMiller->setDimension(100);
    // Test du Park Miller

    std::vector<unsigned long> test = testParkMiller->generate();
    std::cout << "[INFO] Générateur de Park Miller" << std::endl;
    for (int i = 0; i < test.size(); i++) {
        std::cout << "[INFO] Nombre généré : " << test[i] << std::endl;
    }

    // Test du XorShift

    std::cout << "[INFO] Générateur XorShift" << std::endl;
    XorShift *testXorShift = new XorShift();
    testXorShift->setDimension(100);
    std::vector<unsigned long> test2 = testXorShift->generate();
    for (int i = 0; i < test2.size(); i++) {
        std::cout << "[INFO] Nombre généré : " << test2[i] << std::endl;
    }

    // test loi normale

    std::cout << "[INFO] Générateur Loi Normale" << std::endl;
    DistributionNormale *normalTest = new DistributionNormale(0, 1);
    normalTest->setDimension(100);
    std::vector<double> normal = normalTest->generate();
    for (int i = 0; i < normal.size(); i++) {
        std::cout << "[INFO] Nombre généré : " << normal[i] << std::endl;
    }

    // test loi uniforme 

    std::cout << "[INFO] Générateur Loi Uniforme" << std::endl;
    DistributionUniforme *uniTest = new DistributionUniforme(0, 1);
    uniTest->setDimension(100);
    std::vector<double> uni = uniTest->generate();
    for (int i = 0; i < uni.size(); i++) {
        std::cout << "[INFO] Nombre généré : " << uni[i] << std::endl;
    }

    // libération de la mémoire

    delete normalTest;
    delete uniTest;
    delete testGen;
    delete testGen2;
    delete testParkMiller;
    delete testXorShift;

    std::cout << "[INFO] Fin des tests : tout semble s'etre bien passé" << std::endl;*/


int main(int argc, char **argv) {
	testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
