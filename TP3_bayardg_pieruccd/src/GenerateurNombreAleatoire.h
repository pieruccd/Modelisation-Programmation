#ifndef GENENBALEA_H
#define GENENBALEA_H

class GenerateurNombreAleatoire {
    
public:
    GenerateurNombreAleatoire();
    GenerateurNombreAleatoire(int);
    int getDimension(void);
    void setDimension(int dim);

private:
    int dimension;
    
};

#endif /*GENENBALEA_H*/