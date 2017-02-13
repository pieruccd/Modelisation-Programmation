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

		int size();

		double Case(int i);

		void fillRandomly();

		Dvector(const Dvector & v);

		Dvector(std::string S);

		double& operator()(int i) const;

		Dvector & operator += (Dvector & v);

		Dvector & operator -= (Dvector & v);

		Dvector & operator *= (Dvector & v);

		Dvector & operator /= (Dvector & v);

		Dvector & operator += (double & d);

		Dvector & operator -= (double & d);

		Dvector & operator *= (double & d);

		Dvector & operator /= (double & d);

		bool operator == (Dvector & v);


		Dvector & operator = (Dvector & v);

	private :
		double *p;

};

Dvector operator+(Dvector & v,double & d);

Dvector operator-(Dvector & v,double & d);

Dvector operator*(Dvector & v,double & d);

Dvector operator/(Dvector & v,double & d);

Dvector operator+(Dvector & v, Dvector & w);

Dvector operator-(Dvector & v, Dvector & w);

Dvector operator*(Dvector & v, Dvector & w);

Dvector operator/(Dvector & v, Dvector & w);

Dvector operator-(Dvector & v);

std::ostream & operator << (std::ostream & Out, Dvector & v);

std::istream & operator >> (std::istream & In, Dvector & v);

#endif
