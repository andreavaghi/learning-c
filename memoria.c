// Occupazione di memoria dei tipi di dato
#include <stdio.h>

int main()
{
    char c1;
    char c2;
    char c3;
    char c4;

    int i1;
    int i2;
    int i3;
    int i4;

    long l1;
    long l2;
    long l3;
    long l4;

    double d1;
    double d2;
    double d3;
    double d4;

    // SOLO per stavolta non inizializziamo le celle di memoria

    printf("\n********************************************\n");
    printf("* Occupazione in memoria \n");
    printf("********************************************\n\n");
    printf(" il char c1 si trova in 0x %p (%d) \n", &c1 , &c1);
    printf(" il char c2 si trova in 0x %p (%d) \n", &c2 , &c2 );
    printf(" il char c3 si trova in 0x %p (%d) \n", &c3 , &c3 );
    printf(" il char c4 si trova in 0x %p (%d) \n", &c4 , &c4 );

    printf(" l' int  i1 si trova in 0x %p (%d) \n", &i1 , &i1 );
    printf(" l' int  i2 si trova in 0x %p (%d) \n", &i2 , &i2 );
    printf(" l' int  i3 si trova in 0x %p (%d) \n", &i3 , &i3 );
    printf(" l' int  i4 si trova in 0x %p (%d) \n", &i4 , &i4 );

    printf(" il long l1 si trova in 0x %p (%d) \n", &l1 , &l1);
    printf(" il long l2 si trova in 0x %p (%d) \n", &l2 , &l2 );
    printf(" il long l3 si trova in 0x %p (%d) \n", &l3 , &l3 );
    printf(" il long l4 si trova in 0x %p (%d) \n", &l4 , &l4 );

    printf(" il double d1 si trova in 0x %p (%d) \n", &d1 , &d1);
    printf(" il double d2 si trova in 0x %p (%d) \n", &d2 , &d2 );
    printf(" il double d3 si trova in 0x %p (%d) \n", &d3 , &d3 );
    printf(" il double d4 si trova in 0x %p (%d) \n", &d4 , &d4 );

    getchar();
    return 0 ;
}