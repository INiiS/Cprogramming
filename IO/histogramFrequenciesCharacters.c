/* Exercise 1-14 : Write a program to print a histogram of the frequencies
 * of different characters in its input. */

#include <stdio.h>

#define FIRST_CHAR  32
#define LAST_CHAR   127
#define NB_CHAR     128 //last char +1 to take into account array beginning at 0 
#define FIRST_UPPER_CHAR    65
#define LAST_UPPER_CHAR     90
#define FIRST_LOWER_CHAR    97
#define LAST_LOWER_CHAR     122
int main(){

    int i,input, letterIndex;
    int charFrequencies[NB_CHAR] = {0};
    

    while((input = getchar()) != EOF){
        if(input >= FIRST_CHAR && input <= LAST_CHAR){
            ++charFrequencies[input]; 
        }        
    }

    /* Drawing the histogram */
    for( i = 0; i < NB_CHAR; ++i){
        letterIndex = i + FIRST_CHAR;
        if((letterIndex >= FIRST_UPPER_CHAR && letterIndex < LAST_UPPER_CHAR) || (letterIndex >= FIRST_LOWER_CHAR && letterIndex <= LAST_LOWER_CHAR)){ //printing letters

            putchar(letterIndex);
            printf(" | ");
            while(charFrequencies[letterIndex] > 0){
                printf("*");
                --charFrequencies[letterIndex];
            }
            printf("\n");

        }
        
    }





}

