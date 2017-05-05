#include "DistributionUniforme.h"
#include "XorShift.h"
#include <climits>
#include <math.h>

DistributionUniforme::DistributionUniforme(double a, double b) {
    min = a;
    max = b;
}

DistributionUniforme::DistributionUniforme(const DistributionUniforme& orig) {
    min = orig.min;
    max = orig.max;
}

DistributionUniforme::~DistributionUniforme() {
}

double DistributionUniforme::mean() {
    return (min + max)/2;
}

double DistributionUniforme::var() {
    return (max-min)*(max-min)/12;
}

std::vector<double> DistributionUniforme::generate() {
    
    XorShift *xorGen = new XorShift();
    xorGen->setDimension(dimension);
    std::vector<unsigned long> xorRes = xorGen->generate();
    
    std::vector<double> res(dimension);
    for (int i=0; i<res.size(); i++) {
        res[i] = ( (double) xorRes[i] / ((double) ULONG_MAX) ) * (max-min) + min;
    }
    
    delete xorGen;
    return res;
}
