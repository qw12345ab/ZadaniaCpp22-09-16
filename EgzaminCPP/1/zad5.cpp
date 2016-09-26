#include <iostream>

using namespace std;

template <typename A, int iloscElementow, int a>
class Sort 
{ 

A * wsk;
public:
	
    void sortuj ()
    {

    }
    
    void rosnaco() {
    	
	}
};

// Definicja jest poprawna, ale cialo nie chce sie skompilowac.
/*template<>
class SpecialWskChar<char *>{
	
};*/

int main()
{
    Sort <int, 20, 1> obiekt1;
    // Sort<int> obiekt2;
}
