#include <stdio.h>

/* print fahrenheit-celsius table for
   fahr = 0, 20, ..., 300 */

int main()
{
        int fahr, celsius, kelvin;
        int lower, upper, step;

        lower = 0; /* lower limit fo temperature table */
        upper = 300; //upper limit
        step = 15; //step size

        fahr = lower;
        printf("Fahr\tCels\tKelv\n");
        while (fahr <= upper) {
                celsius = 5*(fahr - 32) / 9;
                kelvin = celsius + 273.15;
                printf("%3d F\t%3d C\t%3d K\n", fahr, celsius, kelvin);
                fahr = fahr + step;
        }
}
