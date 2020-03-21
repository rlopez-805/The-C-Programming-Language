/* This is a celsius to fahr converstion chart */

#include <stdio.h>

int main()
{
  float fahr, celcius; 
  float lower, upper, step;

  lower = 11; /* lower limit of temperature scale */
  upper = 300; /* uppre limit */
  step = 20; /* step size */

  celcius = lower;

    printf("Celcius Fahrenheit\n");

  while (celcius <= upper)
  {
    fahr = celcius * 9/5 + 32;

    printf("%5.1f %10.1f\n", celcius, fahr);

    celcius = celcius + 20;

  }

  return 0;
}