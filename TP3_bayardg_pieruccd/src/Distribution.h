
#ifndef DISTRIBUTION_H
#define DISTRIBUTION_H

#include <vector>

class Distribution {
public:
    Distribution();
    Distribution(const Distribution& orig);
    virtual std::vector<double> generate();
    virtual ~Distribution();
    void setDimension(int dim);
protected:
    int dimension;

};

#endif /* DISTRIBUTION_H */

