#include <stdio.h>
#include <stdlib.h>

#define N 10   
// usa opportunamente questa costante per impostare il numero dei cicli nel for

int main()
{
    
	int C[N];
	int i;
	
	// aggiungi qui il ciclo che chiede con delle scanf gli interi all'utente
    for(i = 0; i < N; i++) {
    	printf("Inserisci il numero alla posizione %d\n", i);
    	scanf("%d", &C[i]);
    }

	// aggiungi qui il ciclo che stampa gli elementi del vettore con le printf
	for(i = 0; i < N; i++) {
    	printf("Il numero alla posizione %d e' %d\n", i, C[i]);
    }

    getchar();
	return 0 ;
}
