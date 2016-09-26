// a.)
class Wektor {
	float x, y;
	
	// wskaünik do elementu klasy wektor typu float
	float *wskX;
	
	public:
	
	Wektor() {
		wskX = &x;
	}
};

// b.)
//siedmioelementowa tablica wskaznikow do funkcji int* fun(int) 
// int (*wsk [7]) (int) = &fun;
