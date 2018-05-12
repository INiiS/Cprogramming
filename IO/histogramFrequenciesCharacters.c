/* Exercise 1-14 : Write a program to print a histogram of the frequencies
 * of different characters in its input. */

#include <stdio.h>

#define FIRST_CHAR  32
#define LAST_CHAR   127
#define NB_CHAR     (LAST_CHAR - FIRST_CHAR) + 1 //96 

int main(){

    int i,input, counter;
    int charFrequencies[NB_CHAR];
    /* populate the array with zeros */
    for( i = 0; i < NB_CHAR; ++i){
        charFrequencies[i] = 0;
    }

    while((input = getchar()) != EOF){
        if(input >= FIRST_CHAR && input <= LAST_CHAR){
            ++charFrequencies[input - FIRST_CHAR]; // substract firstchar to c to get index position
        }        
    }

    /* Drawing the histogram */
    for( int j = 0; j < NB_CHAR; ++j){
        if((j+FIRST_CHAR >= 65 && j+FIRST_CHAR <= 90) || (j+FIRST_CHAR >=97 && j+FIRST_CHAR <=122)){
            putchar(j+FIRST_CHAR);
            printf(" | \n");
        }
        
    }





}

