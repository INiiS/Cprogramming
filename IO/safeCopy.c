#include <stdio.h>

int main()
{
    int c;

    while((c=getchar()) != EOF){
        if(c == '\t')
            printf("\\t");
        else if(c == '\b')/* ctrl+h on Unix */  
            printf("\\b");
        else if(c == '\\')
            printf("\\");
        else 
            putchar(c);
    }
}

