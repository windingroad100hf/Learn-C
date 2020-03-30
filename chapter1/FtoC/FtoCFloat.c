#include <stdio.h>

/* print fahrenheit-celsius table for
   fahr = 0, 20, ..., 300 */

int main()
{
        float fahr, celsius, kelvin;
        int lower, upper, step;

        lower = 0; /* lower limit fo temperature table */
        upper = 300; //upper limit
        step = 15; //step size

        fahr = lower;
        printf("%5s\t%5s\t%5s\n","Fahr", "Cels", "Kelv");
        while (fahr <= upper) {
                celsius = 5.0*(fahr - 32.0) / 9.0;
                kelvin = celsius + 273.15;
                printf("%5.1f F\t%5.1f C\t%5.1f K\n", fahr, celsius, kelvin);
                fahr = fahr + step;
        }
}
