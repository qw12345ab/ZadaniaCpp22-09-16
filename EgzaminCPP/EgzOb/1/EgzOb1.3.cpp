class X
{
int i;
public:
static int j;
static f(int j);

// f(int j ) {return 2*i;} // b.) Blad - funkcja nie moze byc przeciazona, poniewaz
							// posiada taka sama sygnature jak statyczna funkcja 
							// static f(int j);
// f(int j ) {return 2*j;} // c.) Blad - funkcja nie moze byc przeciazona, poniewaz
							// posiada taka sama sygnature jak statyczna funkcja 
							// static f(int j);
};

// X::f(int j ) {return 2*j*i;} // a.) Blad - zmienna i nie jest statyczna.
X::f(int j ) {return 2*j;} // d.) Ok.
