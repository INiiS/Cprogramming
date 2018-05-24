/* Exercise 1-20 : Write a program detab that replaces tabs in the 
 * input with the proper of blanks to space to the next tab stop. 
 * Assume a fixed set of tab stops, say every n columns. Should n
 * be a variable or a symbolic parameter ? */


#include<stdio.h>
#define SPACETAB   4

int calculateNumberSpaces(int offset, int tabSize);

int main()
{

    int i, pos, c, spacesUntil;

    pos = 0;
    while((c = getchar()) != EOF){
        if(c != '\t'){
            putchar(c);
        }
        else{
            spacesUntil = 1 + calculateNumberSpaces(pos, SPACETAB); /* 0-based index, so we add 1, before calculating the space until tab stop. */
            for (i = 0; i < spacesUntil; ++i){
                putchar(' ');
            }

                        
        }
        ++pos;
    }



}


/* Function that calculate the required number of spaces to correspond to a tab,
 * given an offset and a tabsize. */
int calculateNumberSpaces(int offset, int tabSize)
{
   return tabSize - (offset % tabSize); 
}
