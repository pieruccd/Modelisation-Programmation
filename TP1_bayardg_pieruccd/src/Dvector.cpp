#include "Dvector.h"
#include <stdlib.h>
#include<fstream>
using namespace std;

void Dvector::display (std::ostream& str){
	for (int i=0; i<this->dim; i++){
		str<<p[i]<<"\n";
	}
}


Dvector::~Dvector()
{
	delete [] p;
}

Dvector::Dvector(int d)
{
	dim = d;
	p=new double[dim];
	for (int i=0; i<dim; i++){
		p[i] = 0;
	}
}

Dvector::Dvector()
{
	dim = 0;
	p=new double[dim];
	for (int i=0; i<dim; i++){
		p[i] = 0;
	}

}

Dvector::Dvector (int d, double value)
{
	dim = d;
	p = new double[dim];
	for (int i=0; i<dim; i++)
		p[i] = value;
}

int Dvector::size(){
	return this->dim;
}

double Dvector::Case(int i)
{
	return p[i];
}

void Dvector::fillRandomly(){
	for (int i=0;i<this->dim;i++){
		p[i]=((double) rand() / (RAND_MAX));
	}
}

Dvector::Dvector(const Dvector & v)
{
	dim = v.dim;
	p=new double[dim];
	for (int i=0;i<dim;i++){
		p[i]=v.p[i];
	}
}

Dvector::Dvector(std::string S){
	ifstream fichier;
	fichier.open(S.c_str());
	int i=0;
	double x;
	if (fichier){
		while(fichier >> x)
		{
			p[i]=x;
			i++;
		}
	}
	else
	{
		cout<<"Erreur : impossible d'ouvrir le fichier"<<"\n";
	}

}

