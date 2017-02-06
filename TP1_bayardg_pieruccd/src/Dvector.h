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

		int size();

		void fillRandomly();

		Dvector(const Dvector & v);

		Dvector(std::string);

	private :
		double *p;

};

#endif
