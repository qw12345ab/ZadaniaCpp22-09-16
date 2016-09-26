class A {
	private:
	int zmPryw1;
	int zmPryw2;
	
	protected:
	int zmChron1;
	int zmChron2;
	
	public:
	int zmPub1;
	int zmPub2;
};

/*
Dziedziczenie publiczne - zmienne publiczne dziedziczone sa jako publiczne,
a chronione jako chronione.
*/
class B : public A {};

/*
Dziedziczenie chronione - zmienne publiczne dziedziczone sa jako chronione.
chronione jako chronione.
*/
class C : protected A {};

/*
Dziedziczenie prywatne - wszystkie skladowe sa dziedziczone jako prywatne.
*/
class D : private A{};

/*
Dziedziczenie wybiorcze - wybieramy co chcemy dziedziczyc.
*/
class E : private A {
	
	protected:
	using A::zmChron2;
	
	public:
	using A::zmPub1;
};




