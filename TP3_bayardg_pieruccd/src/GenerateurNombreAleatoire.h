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
    /**
     * Fonction qui renvoie un vecteur d'entiers aléatoires de taille la
     * dimension du générateur
     * @return vecteur d'entiers aléatoire de taille le champ dimension
     */
    virtual std::vector<unsigned long> generate() = 0;

protected:
    int dimension;
    unsigned long seed;
};

#endif /*GENENBALEA_H*/