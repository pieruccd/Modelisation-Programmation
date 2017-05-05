#include "ParkMiller.h"
#include <time.h>
#include <stdlib.h>

ParkMiller::ParkMiller() {
    seed = (unsigned long) time(NULL);
    a = 16807;
    m = 2147483647;
}

ParkMiller::ParkMiller(const ParkMiller& orig) {
}

ParkMiller::~ParkMiller() {
    
}

std::vector<unsigned long> ParkMiller::generate() {
    std::vector<unsigned long> result;
    result.resize(dimension);
    for (int i = 0; i < dimension; i++) {
        seed = a * seed % m;
        result[i] = seed;
    }
    return result;
}




