/*

"Trzeba jednak zdawaæ sobie sprawê, ¿e cen¹ za polimorfizm jest pewna utrata wydajnoœci. Dla wywo³añ na rzecz obiektów klas niepolimorficznych odpowiednia metoda jest wybierana 

ju¿ w czasie kompilacji na podstawie typu statycznego. Mówimy, ¿e nastêpuje wtedy wczesne wi¹zanie (ang. early binding).

Typ dynamiczny obiektu wskazywanego przez wskaŸnik lub odniesienie mo¿e byæ natomiast okreœlony dopiero w czasie wykonania. Kompilator, napotkawszy wywo³anie metody z klasy 

polimorficznej, nie mo¿e umieœciæ w pliku wykonywalnym kodu odpowiadaj¹cego wywo³aniu konkretnej funkcji. Zamiast tego umieszczany jest tam kod sprawdzaj¹cy prawdziwy typ 

obiektu i wybieraj¹cy odpowiedni¹ metodê. Mówimy, ¿e nastêpuje wtedy póŸne wi¹zanie (ang. late binding). Tak wiêc ka¿de wywo³anie metody wirtualnej powoduje narzut czasowy w 

trakcie wykonania. Wybranie odpowiedniej metody wymaga te¿ dostêpu do informacji o ró¿nych wersjach metody w klasach dziedzicz¹cych. Informacja ta jest zwykle umieszczana w 

specjalnej tablicy, której adres jest przechowywany w ka¿dym obiekcie klasy polimorficznej. Obiekt taki musi byæ zatem wiêkszy ni¿ obiekt analogicznej klasy niepolimorficznej 

- polimorfizm powoduje zatem równie¿ narzut pamiêciowy."

Wiêcej: http://edu.pjwstk.edu.pl/wyklady/pro/scb/PRG2CPP_files/node130.html
*/
