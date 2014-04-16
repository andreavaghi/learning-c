#include <stdio.h>

int main()
{
	int i = 1;
	int N;
	int rad;

	printf("Calcola la radice quadrata di:\n");
    scanf("%d", &N);

    while(i * i <= N) {
    	rad = i;
    	i++;
    }

    printf("La radice quadrata di %d e': %d", N, rad);
       
    printf("\n\nPremi un tasto per uscire");
    fflush(stdin);
    getchar();

	return 0;
}