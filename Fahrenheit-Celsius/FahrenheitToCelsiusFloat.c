#include <stdio.h>

/* print Fahrenheit-Celsius table
 *  for fahr = 0, 20, ... , 300; floating point version */

int main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;      /* lower limit of temperature table */
    upper = 300;    /*upper limit */
    step = 20;      /* step size */

    fahr = lower;
    printf("Fahrenheit Celsius\n");
    while (fahr <= upper){
        celsius = 5 * (fahr - 32) / 9;
        printf("%3.0f  %12.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
}
