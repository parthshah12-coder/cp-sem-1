#include <stdio.h>
#include <math.h>
void main()
{
    float a,b,c,avg,tot;
    printf("enter marks of first subject : ");
    scanf("%f",&a);
    printf("enter marks of second subject : ");
    scanf("%f",&b);
    printf("enter marks of third subject : ");
    scanf("%f",&c);
    tot=a+b+c;
    avg=(a+b+c)/3;
    printf("total marks = %.0f",tot);
    printf("\naverage of three subjects = %.2f",avg);


}
