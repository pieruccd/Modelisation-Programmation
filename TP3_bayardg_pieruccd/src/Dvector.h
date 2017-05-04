#ifndef DVECTOR_H
#define DVECTOR_H

#include<iostream>
#include<fstream>
#include<cstring>

class Dvector
{
	public :
		int dim;
		Dvector(int d);                

		Dvector(int d, double value);

		Dvector();

		~Dvector();

		void display (std::ostream& str);

		int size() const;

		double Case(int i);

		void fillRandomly();

		Dvector(Dvector & v);

		Dvector(std::string S);

		double& operator()(int i) const;

		Dvector & operator += (const Dvector & v);

		Dvector & operator -= (const Dvector & v);

		Dvector & operator *= (const Dvector & v);

		Dvector & operator /= (const Dvector & v);

		Dvector & operator += (const double & d);

		Dvector & operator -= (const double & d);

		Dvector & operator *= (const double & d);

		Dvector & operator /= (const double & d);

		bool operator == (Dvector & v);

		Dvector& operator = (const Dvector & v);

		void resize(const int & taille, const double & value);

	private :
		double *p;

};

Dvector operator+(Dvector & v,const double & d);

Dvector operator-(Dvector & v,const double & d);

Dvector operator*(Dvector & v,const double & d);

Dvector operator/(Dvector & v,const double & d);

Dvector operator+(Dvector & v, Dvector & w);

Dvector operator-(Dvector & v, Dvector & w);

Dvector operator*(Dvector & v, Dvector & w);

Dvector operator/(Dvector & v, Dvector & w);

Dvector operator-(Dvector & v);

std::ostream & operator << (std::ostream & Out, Dvector & v);

std::istream & operator >> (std::istream & In, Dvector & v);

#endif
