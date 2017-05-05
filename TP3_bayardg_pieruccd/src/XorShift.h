#ifndef XORSHIFT_H
#define XORSHIFT_H
#include "GenerateurNombreAleatoire.h"

class XorShift : public GenerateurNombreAleatoire {
public:

    XorShift();
    XorShift(long a1, long a2, long a3);
    XorShift(const XorShift& orig);
    virtual ~XorShift();

    /**
     * Fonction qui renvoie un vecteur d'entiers aléatoires de taille la
     * dimension du générateur suivant l'algo xorshift
     * @return vecteur d'entiers aléatoire de taille le champ dimension
     */
    std::vector<unsigned long> generate();

    long getA1() const;
    long getA2() const;
    long getA3() const;
    void setA1(long a1);
    void setA2(long a2);
    void setA3(long a3);

private:
    unsigned long a1;
    unsigned long a2;
    unsigned long a3;

};

#endif /* XORSHIFT_H */

