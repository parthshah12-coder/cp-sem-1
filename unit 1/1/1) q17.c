#include <stdio.h>
#include <math.h>
void main()
{
   float a,p,l;
   printf("enter the side length of square : ");
   scanf("%f",&l);
   a=pow(l,2);
   p=4*l;
   printf("area of square = %.2f m^2",a);
   printf("\nperimeter of square = %.2f m",p);



}
