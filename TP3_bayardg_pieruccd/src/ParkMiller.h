#ifndef PARKMILLER_H
#define PARKMILLER_H
#include "GenerateurNombreAleatoire.h"


class ParkMiller : public GenerateurNombreAleatoire {
public:
    ParkMiller();
    ParkMiller(const ParkMiller& orig);
    virtual ~ParkMiller();
    int generate();
private:
    int seed;
    int a;
    int m;
};

#endif /* PARKMILLER_H */

