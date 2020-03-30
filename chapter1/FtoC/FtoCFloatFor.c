#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

/* print fahrenheit-celsius table for
   fahr = 0, 20, ..., 300 */

int main()
{
        float fahr;

        printf("%5s\t%5s\t%5s\n","Fahr", "Cels", "Kelv");
        for (fahr=LOWER; fahr <= UPPER; fahr=fahr+ STEP) {
                printf("%5.1f F\t%5.1f C\t%5.1f K\n", fahr, (5.0/9.0)*(fahr-32), (5.0/9.0)*(fahr-32) + 273.15);
        }
}
