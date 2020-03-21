/* print Fahrenheit-Celsius table using for loop */

#include <stdio.h>

/*print Fahrenheit-Celsius table */
int main()
{
  float fahr;

  printf("Fahrenheit Celcius\n");

  for (fahr = 0; fahr <= 300; fahr = fahr + 20)
  {
    printf("%6.1f %6.1f\n", fahr, (fahr - 32) * 5.0/9.0);
  }

  return 0;

}