class Dvector
{
	public :
		int dim;
		Dvector (int d);
	private :
		double *p;

		~Dvector();

void display (std::ostream& str)
}

Dvector::~Dvector()
{
	delete [] p;
}

Dvector::Devector()
{
	dim = 0;
	p= new double[0];
	p[0] = 0;
}
Dvector::Devector (int d, double value)
{
	dim = d;
	p = new double[dim];
	for (int i=0; i<dim; i++)
		p[i] = value;
}
