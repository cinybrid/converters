#include <stdio.h>
int main()
{
    int lower, upper, step;
      float fahr, celsius;
      lower = 0; //lower value of fahr
      upper = 300; //upper value of fahr
      step = 20; //step of fahr degree
      fahr = lower;
    printf ("convert from fahrenheit to celsius\n");

    while (fahr <= upper) //output to display chart of fahr to cels
    {
     celsius = (5.0/9.0) * (fahr -32.0);
     printf("%4.0f %6.1f\n", fahr, celsius);
     fahr = fahr + step;
}
    celsius = lower;
    upper = 100;
    step = 10; //step of cels degree

    printf ("convert from celsius to fahrenheit\n");

    while (celsius <= upper) //output to display chart of cels to fahr
    {
      fahr = (celsius * (9.0/5.0))+32.0;
      printf ("%4.0f %6.1f\n",celsius, fahr);
      celsius = celsius + step;
    }
}
