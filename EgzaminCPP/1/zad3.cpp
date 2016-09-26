#include <iostream>

// using namespace std;

class string {
	int roz; // dlugosc napisu
	char *wsk;
	
	public:
	string (const char n[]);
	operator int () {
		return roz;
	}
	operator char * () {
		return wsk;
	}
};

void fun1(float a) {
	std::cout << a << std::endl;
}

void fun3 (int k) {
	std::cout << k << std::endl;
}

void fun3 (char * c) {
	std::cout << c << std::endl;
}

class X {
	
	public:
	X(double re=0, double im=0)
    {
        
    }
    
    X & operator = (const X & przeslanaInstancja)
    {
        
        return * this;
    }
	
}x;

std::ostream & operator << (std::ostream & o, X & wektor)
{
    return o << "Hello world!\n";
}

class Y {
	
}y;

class Z {
	
}z;

int main(int argc, char** argv) {
	
	// a.)
	
	string s1("ADFG");
	
	// ok
	fun1(s1);
	
	// Blad. Mimo, ze obydwie wersje funkcji fun3() posiadaja rozne sygnatury, 
	// kompilator nie moze przeciazyc zadnej z nich, bo sa tak samo dobre (lub
	// tak samo zle). 
//	fun3(s1);
	
	// b.1.)
	// Tak. Kompilator moze niejawnie skonwertowac typ Z do X.
	
	// b.2.)
	// Tak. Nastapi konwersja niejawna (zawezajaca lub rozszerzajaca, w zaleznosci czy typ X
	// jest wiekszy czy mniejszy od int).
	
	// b.3.)
	// Tak.
	
	int a = 0;
	float b = 0;
	char c = 'a';
	
	x = a;
	x = b;
	x = c;
	
	std::cout << x << std::endl;
}


