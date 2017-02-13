#include "Dvector.h"
#include "assert.h"
#include <sstream>

int main(void)
{
	Dvector v(3,2.5);
	assert(v.size() == 3);
	std::stringstream str;
	v.display(str);
	assert(str.str() == "2.5\n2.5\n2.5\n");
	std::cout<<"Constructeur Dvector(int, double) : OK\n";
	Dvector w(4);
	assert(w.size() == 4);
	w.display(str);
	assert(str.str() == "2.5\n2.5\n2.5\n0\n0\n0\n0\n");
	std::cout<<"Constructeur Dvector(int) : OK\n";
	Dvector u(0);
	assert(u.size()==0);
	std::cout<<"Constructeur Dvector() : OK\n";
	Dvector z(v);
	assert(z.size()==3);
	z.display(str);
	assert(str.str() == "2.5\n2.5\n2.5\n0\n0\n0\n0\n2.5\n2.5\n2.5\n");
	std::cout<<"Constructeur par copie : OK\n";
	Dvector x(2,0);
	assert(x.size()==2);
	assert(x.Case(0)>=0);
	assert(x.Case(0)<=1);
	assert(x.Case(1)>=0);
	assert(x.Case(1)<=1);
	std::cout<<"Remplissage random des cases : OK\n";
	Dvector s("tp1_test1.txt");
	s.display(std::cout);
	assert(s.size()==10);
	Dvector t("tp1_test2.txt");
	t.display(std::cout);
	assert(t.size() == 16737);
	Dvector v1(1);
	v1(0) = 0.0;
	const Dvector v2(1);
	double val = v2(0);
	Dvector v3(4);
	double val2 = v3(0);
	v3=v3+5.0;
}
