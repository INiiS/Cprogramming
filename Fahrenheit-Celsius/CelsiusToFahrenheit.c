/* Exercise 1-4 : Write a program to print
 * the corresponding Celsius to Fahrenheit table. */



#include <stdio.h>

/* print Celsius-Fahrenheit table
 * for cels = 0, 20, ... , 300; */

int main()
{
    float fahr, cels;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    cels = lower;
    while(cels <= upper){
        fahr = cels * 9 / 5 + 32;
        printf("%3.0f %6.0f\n", cels, fahr);
        cels = cels + step;
    }
}
