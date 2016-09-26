#include <iostream>

using namespace std;

class X {
	public:
	virtual f(void);
	f1(void);
} x, *px;

class Y : public X {
	public:
	virtual f(void);
	f1(void);
} y, *py;

int main(int argc, char** argv) {
	// jedyne poprawne rozwiazanie
	// Odpowiedz: zachodzi tutaj konwersja standardowa, ktorej celem jest:
	// - ujednolicenie typow argumentow
	// - zapewnienie obslugi wspolnego typu danych zwroconego przez funkcje realizujaca dzialanie operatora
	// - zachowanie jak najwiekszej precyzji wyniku
	// Def 1: Typem wyniku operacji arytmetycznej jest wspólny typ argumentów po dokonaniu konwersji.
	x = y;
	px = py;
}


