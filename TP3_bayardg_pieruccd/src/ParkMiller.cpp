#include "ParkMiller.h"
#include <time.h>
#include <stdlib.h>

ParkMiller::ParkMiller() {
    seed = time(NULL);
    a = 16807;
    m = 2147483647;
}

ParkMiller::ParkMiller(const ParkMiller& orig) {

}

ParkMiller::~ParkMiller() {

}

std::vector<double> ParkMiller::generate() {
    std::vector<double> result;
    result.resize(dimension);
    for (int i = 0; i < dimension; i++) {
        seed = a * seed % m;
        result[i] = (double) seed / (double) m;
    }
    return result;
}




