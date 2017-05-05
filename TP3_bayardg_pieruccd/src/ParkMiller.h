#ifndef PARKMILLER_H
#define PARKMILLER_H
#include "GenerateurNombreAleatoire.h"
#include "Dvector.h"

class ParkMiller : public GenerateurNombreAleatoire {
public:
    
    ParkMiller();
    ParkMiller(const ParkMiller& orig);
    virtual ~ParkMiller();
    
    /**
     * Fonction qui renvoie un vecteur d'entiers aléatoires de taille la
     * dimension du générateur suivant l'algo de Park-Miller
     * @return vecteur d'entiers aléatoire de taille le champ dimension
     */
    virtual std::vector<unsigned long> generate();
    
private:
    unsigned long a;
    unsigned long m;
};

#endif /* PARKMILLER_H */

