#include <stdio.h>

int main()
{
    float reddito;
    float tasse;
    float difference;
    float max_taxes_1;
    float max_taxes_2;

    max_taxes_1 = ((13000 - 7000) / 100) * 13;
    max_taxes_2 = ((35000 - 13000) / 100) * 23;

    printf("Inserire il reddito in euro (es: 13402,32):\n");
    scanf("%f", &reddito);

    if(reddito < 7000) {
    	tasse = 0;
    } else if(reddito < 13000) {   	
		difference = reddito - 7000;
    	tasse = ((difference / 100) * 13);
    } else if(reddito < 35000) {
    	difference = reddito - 13000;
    	tasse = ((difference / 100) * 23) + max_taxes_1;
    } else {
    	difference = reddito - 35000;
    	tasse = ((difference / 100) * 33) + max_taxes_1 + max_taxes_2;
    }

    printf("le tue tasse ammontano a: %f", tasse);
       
    printf("\n\nPremi un tasto per uscire");
    fflush(stdin);
    getchar();   // trucco per far rimanere aperta la finestra di testo
    return 0;
}