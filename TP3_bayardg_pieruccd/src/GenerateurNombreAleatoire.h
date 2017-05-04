#ifndef GENENBALEA_H
#define GENENBALEA_H

#include "Dvector.h"
#include "vector"

class GenerateurNombreAleatoire {
    
public:
    GenerateurNombreAleatoire();
    GenerateurNombreAleatoire(int dim);
    int getDimension(void);
    void setDimension(int dim);
    void set_seed(unsigned long new_seed);
    long get_seed();
    void reset_seed();
    virtual std::vector<double> generate();

protected:
    int dimension;
    unsigned long seed;
};

#endif /*GENENBALEA_H*/