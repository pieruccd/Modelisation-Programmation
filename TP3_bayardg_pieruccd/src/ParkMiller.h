#ifndef PARKMILLER_H
#define PARKMILLER_H
#include "GenerateurNombreAleatoire.h"
#include "Dvector.h"

class ParkMiller : public GenerateurNombreAleatoire {
public:
    ParkMiller();
    ParkMiller(const ParkMiller& orig);
    virtual ~ParkMiller();
    std::vector<unsigned long> generate();
private:
    unsigned long a;
    unsigned long m;
};

#endif /* PARKMILLER_H */

