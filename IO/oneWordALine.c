#include <stdio.h>

#define IN  1
#define OUT 0


/*print one word per line from input */

int main()
{
    int c, state;
    int nl = 0;
    state = OUT;
    
    while ((c = getchar()) != EOF){
         if (c == ' ' || c == '\n' || c == '\t'){
            state = OUT;
            
        }
         else
         {
             state = IN;
             nl = 0;
         }

         if(state == IN){
             putchar(c);
         }

        else if (state == OUT && nl == 0){
            printf("\n");
            ++nl;
            
        }
    }
}
