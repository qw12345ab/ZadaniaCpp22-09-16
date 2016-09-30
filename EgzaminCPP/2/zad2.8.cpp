class Punkt {
	
	float wysokosc, szerokosc, promien;
	
	public:
		
	virtual void rysuj();
};

class Kwadrat : Punkt {
	
	public:
	
	void rysuj();
	
};

class Okrag : Kwadrat {

	public:
	
	void rysuj();

};

class Prostokat : Kwadrat {

	public:
	
	void rysuj();

};

class Romb : Prostokat{

	public:
	
	void rysuj();

};

class Elipsa : Prostokat{

	public:
	
	void rysuj();

};

class Trojkat : Prostokat{

	public:
	
	void rysuj();

};
