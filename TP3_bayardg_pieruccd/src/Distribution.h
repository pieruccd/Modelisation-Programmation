
#ifndef DISTRIBUTION_H
#define DISTRIBUTION_H

#include <vector>

class Distribution {
public:
    Distribution();
    Distribution(const Distribution& orig);
    /**
     * Fonction qui renvoie un vecteur de tirages aléatoire de la distribution 
     * (uniforme ou normale)
     * @return vecteur de réels aléatoire de taille le champ dimension
     */
    virtual std::vector<double> generate() = 0;
    virtual ~Distribution();
    virtual double mean() = 0;
    virtual double var() = 0;
    void setDimension(int dim);
protected:
    int dimension;

};

#endif /* DISTRIBUTION_H */

