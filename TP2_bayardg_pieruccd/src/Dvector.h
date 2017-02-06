#ifndef DVECTOR_H
#define DVECTOR_H

#include<iostream>
#include<fstream>
#include<string>

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

		double Case(int i) const;

		void fillRandomly();

		Dvector(const Dvector & v);

		Dvector(std::string S);

		double & operator()(int i);
	private :
		double *p;

};

Dvector operator+(const Dvector & v,const double & d);

Dvector operator-(const Dvector & v,const double & d);

Dvector operator*(const Dvector & v,const double & d);

Dvector operator/(const Dvector & v,const double & d);


#endif
