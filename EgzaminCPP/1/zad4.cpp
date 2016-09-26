#include <iostream>

using namespace std;

template<typename A>
class Lzes {
	int re, im;
	
	public:
	
	Lzes() {
		
	}
		
	Lzes(A a = 0, A b = 0) : re(a), im(b) { 
			
	}
	
	Lzes(const Lzes & z): re(z.re), im (z.im) {}
	
	Lzes & operator = (const Lzes & z){ }
	
	~Lzes() {}
	
	// ++a
	A & operator++() {
		re++;
		im++;
		return *this;
	}
	
	// a++
	A & operator++(int) {
		++re;
		++im;
		return *this;
	}
	
	friend & operator << (ostream & o, A & a) {
		return o << "Lzes\n";
	}
	
};






