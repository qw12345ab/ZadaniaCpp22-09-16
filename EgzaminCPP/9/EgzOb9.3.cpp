int a;
void *wv ;
int *wi1, *wi2;
float *wf ;
char *wc ;

wi1 = wi2;
// wf = wi2 ; // blad - nie mozna skonwertowac int * do float *
wf = (float *) wi1;
wv = wf ;
cout << *wf ;
// cout << *wv ; // blad
wv = &wc;
// wi1 = *a; // blad - a nie jest wskaznikiem
wi1 = &a;
// wf = wv; // blad - bledna konwersja
wi1 = (int *) wv;
