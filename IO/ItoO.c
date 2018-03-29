#include <stdio.h>

/* copy input to output; 2nd version */
int main()
{
    int c;
    int cc = getchar()!= EOF;

    
    while ((c=getchar()) != EOF) 
        putchar(c);

    printf("Value of c=getchar() != EOF : %d\n", cc);
    printf("Value of EOF : %d\n ", c);
}

