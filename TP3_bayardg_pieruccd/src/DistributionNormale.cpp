#include <vector>
#include "DistributionNormale.h"
#include "XorShift.h"
#include <math.h>
#include <cmath>

DistributionNormale::DistributionNormale(double moy, double sig) {
    m = moy;
    sigma = sig;
}

DistributionNormale::DistributionNormale(const DistributionNormale& orig) {
}

DistributionNormale::~DistributionNormale() {
}

std::vector<double> DistributionNormale::generate() {
    /*Algorithme de Box Muller */
    std::vector<double> res;
    std::vector<double> unif1;
    std::vector<double> unif2;
    XorShift *xor1 = new XorShift();
    XorShift *xor2 = new XorShift();
    xor1->setDimension(dimension);
    xor2->setDimension(dimension);
    xor1->set_seed( (unsigned long) time(NULL));
    xor2->set_seed( (unsigned long) time(NULL) + 1);
    unif1 = xor1->generate();
    unif2 = xor2->generate();
    res.resize(dimension);
    for (int i=0; i<res.size(); i++) {
        res[i] = sqrt(-2*log(unif1[i]))*cos(2*M_PI*unif2[i]);
        res[i] = sigma * res[i] + m;
    }
    return res;
}

