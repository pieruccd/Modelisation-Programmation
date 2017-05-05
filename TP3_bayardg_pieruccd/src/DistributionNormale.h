#ifndef DISTRIBUTIONNORMALE_H
#define DISTRIBUTIONNORMALE_H

#include "Distribution.h"


class DistributionNormale : public Distribution {
public:
    DistributionNormale(double moy, double sig);
    DistributionNormale(const DistributionNormale& orig);
    virtual ~DistributionNormale();
    virtual double mean();
    virtual double var();
    virtual std::vector<double> generate();
private:
    double m;
    double sigma;
};

#endif /* DISTRIBUTIONNORMALE_H */

