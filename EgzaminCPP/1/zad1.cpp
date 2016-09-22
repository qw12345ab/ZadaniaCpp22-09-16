#include <iostream>

using namespace std;

class L_zes {
	int re, im;
	
	public:
	
	/*
	Konstruktor z parametrami domyslnymi.
	*/
	L_zes(int i = 0, int j = 0);
	
	/*
	Konstruktor kopiujacy
	*/
	L_zes(const L_zes & );
	
	L_zes operator + (const L_zes & zes);
	
	/*...*/
};

L_zes::L_zes( int re, int im ) {
	this->re = re;
	this->im = im;
}

L_zes::L_zes(const L_zes & zes) {
	this->re = zes.re;
	this->im = zes.im;
}

L_zes L_zes::operator + (const L_zes & zes)
{
    L_zes nowaInstancja(this->re + zes.re, this->im + zes.im);
    return nowaInstancja;
}






