#include <stdio.h>

#define IN 1 /* inside a word */
#define OUT 0 /* outside a word */

/* count lines, words, and characters in input */

int main()
{
    int c, nl, nw, nc, state;

    state = OUT;
    nl = nw = nc = 0;
    while((c = getchar()) != EOF){
        ++nc;
        if( c == '\n')
            ++nl;
        if(c == ' ' || c == '\n' || c == '\t')
            state = OUT;
        else if (state == OUT){
            state = IN;
            ++nw;
        }
    }
    printf("lines = %d words =  %d characters =  %d\n", nl, nw, nc);
}

/* testing : 
 * no words, blanks or tabs, expect 0, 0, 0
 * one word per line
 * only tabs
 * huge input : lorem ipsum => 600+ words 
 */

