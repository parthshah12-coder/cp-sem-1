#include <stdio.h>
#include <math.h>
#define PI 3.14
void main()
{
    float r,a,c;
    printf("enter radius of circle : ");
    scanf("%f",&r);
    c=2*PI*r;
    a=pow(r,2)*PI;
    printf("area of circle = %.2f m^2",a);
    printf("\ncircumference of circle = %.2f m",c);

}
