#ifndef DVECTOR_H
#define DVECTOR_H

#include<iostream>
#include<fstream>
#include<cstring>

class Dvector
{
	public :
/**
 * \brief      Taille du vecteur
 */
		int dim;

/**
 * \brief      Constructeur par défaut
 * \return    Un \e Dvector de taille vide
 */
		Dvector();

/**
 * \brief      Constructeur avec taille
 * \return    Un \e Dvector de taille d et initialisé avec des 0
 */
                Dvector(int d);

/**
 * \brief      Constructeur avec taille et valeur d'initialisation
 * \param    d int taille du vecteur à créer
 * \param    value valeur à utiliser pour initialiser les éléments du vecteur.
 * \return    Un \e Dvector de taille d
 */
                Dvector(int d, double value);



/**
 * \brief      Destructeur du vecteur
 */
		~Dvector();

/**
 * \brief      Constructeur avec taille et valeur d'initialisation
 * \details    Cette méthode affiche sur le flux passé en paramètre  le contenu du vecteur
 * \param    str flux sur lequel afficher le vecteur
 */

		void display (std::ostream& str);


/**
 * \brief      Renvoit la taille d'un vecteur (sa dimension)
 * \return    Un \e int représentant la taille du vecteur
 */
		int size() const;

		double Case(int i);

/**
 * \brief      Remplit le vecteur selon la loi uniforme sur [0,1]
 */
		void fillRandomly();

/**
 * \brief      Constructeur par recopie
 * \param    v Dvector à copier
 * \return    Un \e Dvector de même dimension et de même valeurs que le vecteur entrée en aramètre
 */
		Dvector(Dvector & v);

/**
 * \brief      Constructeur à partir d'un fichier
 * \details    Permet de créer un vecteur à partir d’un fichier dans lequel les éléments du vecteur ont été stockés
 * \param    S String nom du fichier contenant les éléments du vecteurs
 * \return    Un \e Dvector contenant les éléments du fichier
 */
		Dvector(std::string S);

/**
 * \brief      Opérateur d'accession
 * \param    i entier correspondant à l'indice de l'élément qu'on veut récuprérer
 * \return    Un \e double correspindant à la valeur de l'élément
 */

		double& operator()(int i) const;

/**
 * \brief      Opérateur d'addition interne avec un vecteur
 * \details   Les additions se font coordonnées par coordonnées
 * \param    v Devector opérande de droite ajouté à l'opérande de gauche
 * \return    Un \e Dvector égal à l'opérande de gauche auquel et ajouté l'opérande de droite 
 */

		Dvector & operator += (const Dvector & v);

/**
 * \brief      Opérateur de soustraction interne avec un vecteur
 * \details   Les soustractions se font coordonnées par coordonnées
 * \param    v Devector opérande de droite soustrait à l'opérande de gauche
 * \return    Un \e Dvector égal à l'opérande gauche auquel est soustrait l'opérande de droite 
 */

		Dvector & operator -= (const Dvector & v);

/**
 * \brief      Opérateur de multiplication interne avec un vecteur
 * \details   Les multiplications se font coordonnées par coordonnées
 * \param    v Devector opérande de droite dont les coordonnées multiplient celles de l'opérande de gauche
 * \return    Un \e Dvector égal à l'opérande gauche multiplié par l'opérande de droite 
 */

		Dvector & operator *= (const Dvector & v);

/**
 * \brief      Opérateur de division interne avec un vecteur
 * \details   Les divisions se font coordonnées par coordonnées
 * \param    v Devector opérande de droite dont les coordonnées divisent celes de l'opérande de gauche
 * \return    Un \e Dvector égal à l'opérande gauche divisé par l'opérande de droite
 */
		Dvector & operator /= (const Dvector & v);


/**
 * \brief      Opérateur d'addition interne avec un double
 * \details   Les additions se font coordonnées par coordonnées
 * \param    d double valeur ajoutée à chaque élément du vecteur de l'opérande gauche
 * \return    Un \e Dvector égal à l'opérande gauche dont les valeurs ont été incrémentées de la valeur d
 */

		Dvector & operator += (const double & d);

/**
 * \brief      Opérateur de soustraction interne avec un double
 * \details   Les soustractions se font coordonnées par coordonnées
 * \param    d double valeur soustraite à chaque élément du vecteur de l'opérande gauche
 * \return    Un \e Dvector égal à l'opérande gauche dont les valeurs ont été décrémentées de la valeur d
 */

		Dvector & operator -= (const double & d);

/**
 * \brief      Opérateur de multiplication interne avec un double
 * \details   Les multiplication se font coordonnées par coordonnées
 * \param    d double valeur qui multiplie chaque éléments du vecteur de l'opérande gauche
 * \return    Un \e Dvector égal à l'opérande gauche multiplié par la valeur d
 */

		Dvector & operator *= (const double & d);

/**
 * \brief      Opérateur de division interne avec un double
 * \details   Les divisions se font coordonnées par coordonnées
 * \param    d double valeur qui divise chaque élément du vecteur de l'opérande gauche
 * \return    Un \e Dvector égal à l'opérande gauche dont les valeurs ont été divisée par la valeur
 */

		Dvector & operator /= (const double & d);

/**
 * \brief      Opérateur de comparaison
 * \param    v Dvector pour la comparaison entre les deux vecteurs
 * \return    Un \e bool : true si la dimension et les élements des deux vecteurs sont égaux, false sinon
*/
		bool operator == (Dvector & v);

/**
 * \brief      Opérateur d'affectation
 * \details    Copie la dimension et les éléments du vecteurs entré en paramètre
 * \param    v Dvector le Dvector copié.
 * \return    Un \e Dvector identique à celui entré en argument
 */
		Dvector& operator = (const Dvector & v);


/** 
 * \brief      Méthode de changement de la taille du vecteur.
 * \details    Permet de modifier la taille d'un vecteur. En cas de diminution de la taille, les éléments supprimés sont ceux en fin de vecteur. En cas d'augmentation de la taille, toutes les nouv aux éléments prennent une valeur qu'on donne en paramètre.
 * \param    taille int nouvelle taille du vecteur.
 * \param    value double valeur des nouvelles valeurs du vecteurs en cas d'augmntation de la taille du vecteur.
 */
		void resize(const int & taille, const double & value);

	private :
/**
 * \brief      Tableau contenant les valeurs du vecteurs
 */
		double *p;

};

/**
 * \brief      Opérateur d'addition externe avec un double
 * \param    v Dvector 
 * \param    d double
 * \return    Un \e Dvector égal à la somme du vecteur de  l'opérande de gauche et du double entré en paramètre
 */
Dvector operator+(Dvector & v,const double & d);

/**
 * \brief      Opérateur de soustraction externe avec un double
 * \param    v Dvector 
 * \param    d double
 * \return    Un \e Dvector égal à l'opérande de gauche auquel on soustrait le double entré en paramètre
 */
Dvector operator-(Dvector & v,const double & d);

/**
 * \brief      Opérateur de multiplication externe avec un double
 * \param    v Dvector 
 * \param    d double
 * \return    Un \e Dvector égal à l'opérande de gauche multiplié par le double entré en paramètre
 */
Dvector operator*(Dvector & v,const double & d);

/**
 * \brief      Opérateur de division externe avec un double
 * \param    v Dvector 
 * \param    d double
 * \return    Un \e Dvector égal à  l'opérande de gauche divisé par le double entré en paramètre
 */
Dvector operator/(Dvector & v,const double & d);

/**
 * \brief      Opérateur d'addition externe avec vecteur
 * \param    v Dvector 
 * \param    w vecteur
 * \return    Un \e Dvector égal à  la somme des deux vecteurs
 */
Dvector operator+(Dvector & v, Dvector & w);

/**
 * \brief      Opérateur de soustraction externe avec vecteur
 * \param    v Dvector 
 * \param    w vecteur
 * \return    Un \e Dvector égal à la différence  des deux vecteurs
 */
Dvector operator-(Dvector & v, Dvector & w);

/**
 * \brief      Opérateur de multiplication externe avec vecteur
 * \details les multiplications se font coordonnée par coordonnée
 * \param    v Dvector 
 * \param    w vecteur
 * \return    Un \e Dvector égal au produit des deux vecteurs
 */

Dvector operator*(Dvector & v, Dvector & w);

/**
 * \brief      Opérateur de division externe avec vecteur
 * \details les divisions se font coordonnée par coordonnée
 * \param    v Dvector 
 * \param    w vecteur
 * \return    Un \e Dvector égal au quotient  des deux vecteurs
 */
Dvector operator/(Dvector & v, Dvector & w);

/**
 * \brief      Moins unaire
 * \param    v Dvector 
 * \return    Un \e Dvector égal à l'inverse du vercteur v
 */
Dvector operator-(Dvector & v);

std::ostream & operator << (std::ostream & Out, Dvector & v);

std::istream & operator >> (std::istream & In, Dvector & v);

#endif
