#include <stdio.h>
#include <math.h>

int main()
{
    int x,x1,x2,z,y,a,b,c,d,k;
    printf("a=");
    scanf("%d",&a);
    printf("b=");
    scanf("%d",&b);
    printf("c=");
    scanf("%d",&c);
    d=pow(b,2)-4*a*c;
    k=sqrt(d);
    x1=(-b)+k/2*a;
    x2=(-b)-k/2*a;
    if(x1<0 && x2<0)
    {
      printf("квадратне рівняння має два різних дійсних корені ");
    }
    else if(x1>0 && x2<0)
    {
      printf("квадратне рівняння має один дійсний корінь");
    }
    else if(x1<0 && x2>0)
    {
      printf("квадратне рівняння має один дійсний корінь");
    }
    else
    {
      printf("квадратне рівняння не має два різних дійсних корені");
    }
    return 0;
}