#include "Dvector.h"
#include <stdlib.h>
#include <fstream>
using namespace std;

void Dvector::display (std::ostream& str){
	for (int i=0; i<this->dim; i++){
		str<<p[i]<<"\n";
	}
}


Dvector::~Dvector()
{
	delete [] p;
	std::cout<<"Dvector détruit\n";
}

Dvector::Dvector(int d)
{
	dim = d;
	p=new double[dim];
	for (int i=0; i<dim; i++){
		p[i] = 0;
	}
	std::cout<<"Dvector de taille "<<dim<<" créé\n";
}

Dvector::Dvector()
{
	dim = 0;
	p=new double[dim];
	for (int i=0; i<dim; i++){
		p[i] = 0;	
		std::cout<<"DVector vide créé";
	}

}

Dvector::Dvector (int d, double value)
{
	dim = d;
	p = new double[dim];
	for (int i=0; i<dim; i++)
		p[i] = value;
	std::cout<<"Dvector de  "<<dim<<" cases de valeur "<<value<<" créé\n";
}

int Dvector::size() {
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

Dvector::Dvector(Dvector & v)
{
	dim = v.dim;
	p=new double[dim];
	for (int i=0;i<dim;i++){
		p[i]=v.p[i];
	}
	std::cout<<"Dvector de  "<<dim<<" cases créé\n";
}

Dvector::Dvector(std::string S){
	ifstream fichier;
	fichier.open(S.c_str());
	int i=0;
	double x;
	dim = 0;
	if (fichier){
		while(fichier >> x)
		{
			dim++;
		}
		p = new double[dim];
		fichier.close();
		fichier.open(S.c_str());
		while(fichier >> x) {
			p[i]=x;
			i++;
		}
	}
	else
	{
		cout<<"Erreur : impossible d'ouvrir le fichier"<<"\n";
	}

}

double& Dvector::operator()(int i) const{
	if (i>dim){
		cout<<"Index invalide"<<"\n";
		throw 0.0;
	}
	else
	{
		return p[i];
	}
}

Dvector operator+(Dvector & v,const double & d){
	Dvector a(v.size());
	for (int i=0;i<v.dim;i++){
		a(i)=v(i)+d;
	}
	return a;
}

Dvector operator-(Dvector & v,const double & d){
	Dvector a(v.size());
	for (int i=0;i<v.dim;i++){
		a(i)=v(i)-d;
	}
	return a;
}

Dvector operator*(Dvector & v,const double & d){
	Dvector a(v.size());
	for (int i=0;i<v.dim;i++){
		a(i)=v(i)*d;
	}
	return a;
}

Dvector operator/(Dvector & v,const double & d){
	if (d==0){
		cout<<"Erreur : divion par 0"<<"\n";
		throw 0.0;
	}
	else
	{
		Dvector a(v.size());
		for (int i=0;i<v.dim;i++){
			a(i)=v(i)/d;
		}
		return a;
	}
}

Dvector operator+(Dvector & v,Dvector & w) {
	Dvector a(v.size());
	for (int i=0;i<v.dim;i++){
		a(i)=v(i)+w(i);
	}
	return a;
}

Dvector operator-(Dvector & v,Dvector & w){
	Dvector a(v.size());
	for (int i=0;i<v.dim;i++){
		a(i)=v(i)-w(i);
	}
	return a;
}

Dvector operator*(Dvector & v,Dvector & w) {
	Dvector a(v.size());
	for (int i=0;i<v.dim;i++){
		a(i)=v(i)*w(i);
	}
	return a;
}

Dvector operator/(Dvector & v,Dvector & w){
	Dvector a(v.size());
	for (int i=0;i<v.dim;i++){
		if (w(i)==0){
			cout<<"Erreur : division par 0"<<"\n";
			throw 0;
		}
		else{
			a(i)=v(i)/w(i);
		}
	}
	return a;
}

Dvector operator-(Dvector & v) {
	Dvector a(v.size());
	for (int i=0;i<v.dim;i++){
		a(i)=-v(i);
	}
	return a;
}

std::ostream & operator << (std::ostream & Out, Dvector & v){
	Out<<"Dvector : ";
	for(int i=0;i<v.dim;i++){
		Out<<v(i)<<" ";
	}
	Out<<endl;
	return Out;
}

std::istream & operator >> (std::istream & In, Dvector & v){
	for (int i=0; i<v.dim;i++){
		In>>v(i);
	}
	return In;
}

Dvector & Dvector::operator += (const double & d){
	Dvector &w=*this;
	for (int i=0; i<dim; i++){
		w(i)=w(i)+d;
	}
	return w;
}

Dvector & Dvector::operator -= (const double & d){
	Dvector &w=*this;
	for (int i=0; i<dim; i++){
		w(i)=w(i)-d;
	}
	return w;
}

Dvector & Dvector::operator *= (const double & d){
	Dvector &w=*this;
	for (int i=0; i<dim; i++){
		w(i)=w(i)*d;
	}
	return w;
}

Dvector & Dvector::operator /= (const double & d){
	Dvector &w=*this;
	if (d==0){
		cout<<"Division par 0\n";
			throw 0.0;
	}
	else{
		for (int i=0; i<dim; i++){
			w(i)=w(i)/d;
		}
		return w;
	}
}

Dvector & Dvector::operator+= (const Dvector & v){
	Dvector &w=*this;
	for (int i=0; i<dim; i++){
		w(i)=w(i)+v(i);
	}
	return w;
}

Dvector & Dvector::operator-= (const Dvector & v){
	Dvector &w=*this;
	for (int i=0; i<dim; i++){
		w(i)=w(i)-v(i);
	}
	return w;
}

Dvector & Dvector::operator*= (const Dvector & v){
	Dvector &w=*this;
	for (int i=0; i<dim; i++){
		w(i)=w(i)*v(i);
	}
	return w;
}

Dvector & Dvector::operator/= (const Dvector & v){
	Dvector &w=*this;
	for (int i=0; i<dim; i++){
		if (v(i)==0){
			cout<<"division par 0\n";
			throw 0;
		}
		else{
			w(i)=w(i)/v(i);
		}
	}
	return w;
}

Dvector & Dvector::operator= (const Dvector & v)
{
	if(this == &v) return *this; 
	delete[] p; 
	p = new double[v.size()];
	dim = v.size();
	memcpy(p, v.p, sizeof(double) * dim);
	return *this;
}

bool Dvector::operator== (Dvector & v)
{
	if (dim!=v.size()){
		return false;
	}
	else{
		for (int i=0;i<dim;i++){
			if (p[i]!=v(i)){
				return false;
			}
		}
	}
	return true;
}

