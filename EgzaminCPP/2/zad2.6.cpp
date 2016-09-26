/*

"Trzeba jednak zdawa� sobie spraw�, �e cen� za polimorfizm jest pewna utrata wydajno�ci. Dla wywo�a� na rzecz obiekt�w klas niepolimorficznych odpowiednia metoda jest wybierana 

ju� w czasie kompilacji na podstawie typu statycznego. M�wimy, �e nast�puje wtedy wczesne wi�zanie (ang. early binding).

Typ dynamiczny obiektu wskazywanego przez wska�nik lub odniesienie mo�e by� natomiast okre�lony dopiero w czasie wykonania. Kompilator, napotkawszy wywo�anie metody z klasy 

polimorficznej, nie mo�e umie�ci� w pliku wykonywalnym kodu odpowiadaj�cego wywo�aniu konkretnej funkcji. Zamiast tego umieszczany jest tam kod sprawdzaj�cy prawdziwy typ 

obiektu i wybieraj�cy odpowiedni� metod�. M�wimy, �e nast�puje wtedy p�ne wi�zanie (ang. late binding). Tak wi�c ka�de wywo�anie metody wirtualnej powoduje narzut czasowy w 

trakcie wykonania. Wybranie odpowiedniej metody wymaga te� dost�pu do informacji o r�nych wersjach metody w klasach dziedzicz�cych. Informacja ta jest zwykle umieszczana w 

specjalnej tablicy, kt�rej adres jest przechowywany w ka�dym obiekcie klasy polimorficznej. Obiekt taki musi by� zatem wi�kszy ni� obiekt analogicznej klasy niepolimorficznej 

- polimorfizm powoduje zatem r�wnie� narzut pami�ciowy."

Wi�cej: http://edu.pjwstk.edu.pl/wyklady/pro/scb/PRG2CPP_files/node130.html
*/
