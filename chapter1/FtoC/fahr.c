#include <stdio.h>
/* convert farenheit into Celcius */

int convert(int fahr)
{
	int celsius;
	celsius = (5.0/9.0)*(fahr-32);
	return celsius;
}

int main()
{
      int a=212;
      int d=convert(a);
      printf("%d Farenheit is %d in Celsius\n", a, d);
}
