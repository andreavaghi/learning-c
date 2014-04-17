// Occupazione di memoria dei tipi di dato CARATTERE
#include <stdio.h>

int main()
{
    char c1;
    char c2;
    char c3;

	c1 = 'a';
	c2 = 62;  // e' corretto?

	// visualizza il carattere come carattere
	printf("%c\n", c1);
	// visualizza il carattere come intero
	printf("%d\n", c1);
	// stampa gli indirizzi di memoria delle celle
	printf(" il char c1 si trova in 0x %p (%d) \n", &c1 , &c1);
	printf(" il char c2 si trova in 0x %p (%d) \n", &c2 , &c2 );
	printf(" il char c3 si trova in 0x %p (%d) \n", &c3 , &c3 );
	// visualizza il carattere come float
	printf("%f\n", c1);
    getchar();
    return 0 ;
}