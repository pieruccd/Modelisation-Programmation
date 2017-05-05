#ifndef DISTRIBUTIONUNIFORME_H
#define DISTRIBUTIONUNIFORME_H

#include "Distribution.h"


class DistributionUniforme : public Distribution {
    
public:
    DistributionUniforme(double a, double b);
    DistributionUniforme(const DistributionUniforme& orig);
    virtual ~DistributionUniforme();
    std::vector<double> generate();
    
private:  
    double min;
    double max;

};

#endif /* DISTRIBUTIONUNIFORME_H */

