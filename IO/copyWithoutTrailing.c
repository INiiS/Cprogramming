/* Exercise 1-9 : Write a program to copy its input to its output,
 * replacing each string of one or more blanks by a single blank */


#include <stdio.h>

/* copy input to output, and replace string of blanks with only one blank */

int main()
{
    int c;

    while((c = getchar()) != EOF){
        if(c == ' '){ /* if c is blank, continue until it's not and then print one blank */
            while (( c = getchar()) == ' '){
              /* nothing here, as it is only used to 'burn' the excessive blanks */  
            }
            putchar(' ');
        }
        putchar(c);
    }
}


