#include <stdio.h>
#include <math.h>
int main()
{
float y,z,x;
printf("Напишіть y= 5, y=10 або y=2\n");
printf("y=");
scanf("%g",&y);
printf("z=");
scanf("%g",&z);
if(y == 5)
{
      x = sqrt(3*y)-pow(z,2);
	 printf ("\nперша умова = %g",x);
}
else if (y == 10)
{
      x = y/2+15*z;
     printf ("\nдруга умова = %g",x);
}
else if (y == 2)
{
     x = y*z-7-z;
     printf ("\nтретя умова  = %g",x);
}
else
{
  printf("Ні одна з умов не виконалась");
}
    return 0;
}