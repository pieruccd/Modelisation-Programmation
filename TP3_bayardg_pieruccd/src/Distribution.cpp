#include <vector>
#include "Distribution.h"
#include <stdlib.h>

Distribution::Distribution() {
}

void Distribution::setDimension(int dim) {
    dimension = dim;
}

Distribution::Distribution(const Distribution& orig) {
}

Distribution::~Distribution() {
}

std::vector<double> Distribution::generate() {
    std::vector<double> res;
    return res;
}


