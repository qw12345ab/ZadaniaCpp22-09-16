class Osoba	{
	char naz[20];
	int wiek;
	public:
	
	// Konstruktor z lista inicjalizacyjna
	Osoba() : naz("Kowalski"), wiek(22) {
		
	}
};

int main(int argc, char** argv) {
	Osoba grupa[3];
	Osoba * wsk = new Osoba[10];
}
