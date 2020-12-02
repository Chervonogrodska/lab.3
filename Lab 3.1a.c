#include <stdio.h>
#include <math.h>
int main()
{
float y,z,x;
printf("Напишіть y=");
scanf("%g",&y);
printf("Напишіть z=");
scanf("%g",&z);
if(y == 5)
{
      x = sqrt(3*y)-pow(z,2);
	 printf ("\n Виконується перша умова = %g",x);
}
if (y == 10)
{
      x = y/2+15*z;
     printf ("\n Виконується друга умова = %g",x);
}
if (y == 2)
{
     x = y*z-7-z;
     printf ("\n Виконується третя умова  = %g",x);
}
if (y!=5 && y!=10 && y!=2)
{
printf ("\n Не виконується жодна умова");
}
}