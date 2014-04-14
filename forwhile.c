#include <stdio.h>

int main()
{
	int i;
	int j;
	int x;

	for(i = 1; i <= 10; i++) {
		printf("%d\n", i);
	}

	char asterisco[] = "*";

	for (j = 1; j <= 8; j++) {
		for(x = 1; x < j; x++ ) {
			printf("%s", asterisco);
		}
		printf("\n");
	}
	getchar();
	return 0;
}