#include <stdio.h>

int main()
{
	int p = 5;
	int x = 5;

	p *= x++;

	printf("p *= x++, p è uguale a: %d\n", p);

	int pp = 5;
	int xx = 5;

	pp *= xx++;

	printf("pp *= xx++, xx è uguale a: %d\n", x);

	getchar();
	return 0;
}