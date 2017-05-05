#include <vector>
#include "DistributionNormale.h"
#include "XorShift.h"
#include <math.h>
#include <cmath>
#include <climits>

DistributionNormale::DistributionNormale(double moy, double sig) {
    m = moy;
    sigma = sig;
}

DistributionNormale::DistributionNormale(const DistributionNormale& orig) {
    sigma = orig.sigma;
    m = orig.m;
}

DistributionNormale::~DistributionNormale() {
}

double DistributionNormale::mean() {
    return m;
}

double DistributionNormale::var() {
    return sigma*sigma;
}

std::vector<double> DistributionNormale::generate() {
    /*Algorithme de Box Muller */
    std::vector<double> res;
    
    std::vector<unsigned long> resXor1;
    std::vector<unsigned long> resXor2;
    
    std::vector<double> unif1;
    std::vector<double> unif2;
    
    XorShift *xor1 = new XorShift();
    XorShift *xor2 = new XorShift();
    xor1->setDimension(dimension);
    xor2->setDimension(dimension);
    xor1->set_seed( (unsigned long) time(NULL));
    xor2->set_seed( (unsigned long) time(NULL) + 1);
    
    resXor1 = xor1->generate();
    resXor2 = xor2->generate();
    
    res.resize(dimension);
    unif1.resize(dimension);
    unif2.resize(dimension);
    
    for (int i=0; i<res.size(); i++) {
        unif1[i] = (double) resXor1[i] / ((double) ULONG_MAX);
        unif2[i] = (double) resXor2[i] / ((double) ULONG_MAX);
        res[i] = sqrt(-2*log(unif1[i]))*cos(2*M_PI*unif2[i]);
        res[i] = sigma * res[i] + m;
    }
    
    delete xor1;
    delete xor2;
    
    return res;
}

