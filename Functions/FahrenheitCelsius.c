/*
 * Exercise 1-15 : Rewrite the temperature conversion program
 * of Section 1-2 to use a function for conversion.
 */

#include <stdio.h>

#define LOWER   0
#define UPPER   300
#define STEP    20

float convertFahrenheit(float f);

int main()
{
    float fahr, celsius;
    printf("F       C\n\n");
    fahr = LOWER;

    while (fahr <= UPPER){
        celsius = convertFahrenheit(fahr);
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr = fahr + STEP;
    }


}

/* Converts Fahrenheit to Celsius temperatures */
float convertFahrenheit(float fahrenheit)
{
    int celsius;
    celsius = (5.0/9.0) * (fahrenheit - 32.0);
    return celsius;

}


