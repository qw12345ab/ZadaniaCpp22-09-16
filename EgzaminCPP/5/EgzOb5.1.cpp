class A {
	
	void fun (int); 
//	int fun (int); // blad
	int fun (int, int);

	
};

class B {
	
	int fun (unsigned int);
	int fun (int);
	int fun (int, char);

};

class C {
	
	int  fun (int a, int b=0); 
	int fun (int);

};

class D {
	
	void  fun (int tab[]); 
//	void  fun (int *wsk); // blad
	
	
};
