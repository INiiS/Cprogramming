#include <stdio.h>

/* count lines in input */

int main()
{
    int c, nl,tabs, blanks;
    tabs = 0;
    blanks = 0;
    nl = 0;

    while((c = getchar()) != EOF){
        if(c == '\t'){
            ++tabs;
        }
         if( c == '\n'){
            ++nl;
         }
         if( c == ' '){
             ++blanks;
         }
    }
         printf("Newlines : %d\n",nl);
         printf("Tabs : %d\n", tabs);
         printf("Blanks : %d\n", blanks);
 }
