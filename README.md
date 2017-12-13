/* just started to code and did 1-3 and 1-4 exc of Kernighan and Ritchie's book
IKBO-05-17 Sotnikova A.A */

#include <stdio.h>
int main()
{
    int lower, upper, step;
      float fahr, celsius;
      lower = 0;
      upper = 300;
      step = 20;
      fahr = lower;
    printf ("convert from fahrenheit to celsius\n");
    while (fahr <= upper)
    {
     celsius = (5.0/9.0) * (fahr -32.0);
     printf("%4.0f %6.1f\n", fahr, celsius);
     fahr = fahr + step;
}
    celsius = lower;
    upper = 100;
    step = 10;
    printf ("convert from celsius to fahrenheit\n");
    while (celsius <= upper)
    {
      fahr = (celsius * (9.0/5.0))+32.0;
      printf ("%4.0f %6.1f\n",celsius, fahr);
      celsius = celsius + step;
    }
}
