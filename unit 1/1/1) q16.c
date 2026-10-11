#include <stdio.h>
#include <math.h>
void main()
{
    float p,r,n,i;
    printf("enter principle amount : ");
    scanf("%f",&p);
    printf("enter rate of interest : ");
    scanf("%f",&r);
    printf("enter time in years : ");
    scanf("%f",&n);

    i= p*r*n/100.0;
    printf("simple interest = %.3f",i);





}
