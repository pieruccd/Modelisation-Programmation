#include <vector>
#include "Distribution.h"
#include <stdlib.h>

Distribution::Distribution() {
    dimension = 1;
}

void Distribution::setDimension(int dim) {
    dimension = dim;
}

Distribution::Distribution(const Distribution& orig) {
    dimension = orig.dimension;    
}

Distribution::~Distribution() {
}