
#ifndef DISTRIBUTION_H
#define DISTRIBUTION_H

#include <vector>

class Distribution {
public:
    Distribution();
    Distribution(const Distribution& orig);
    virtual std::vector<double> generate() = 0;
    virtual ~Distribution();
    virtual double mean() = 0;
    virtual double var() = 0;
    void setDimension(int dim);
protected:
    int dimension;

};

#endif /* DISTRIBUTION_H */

