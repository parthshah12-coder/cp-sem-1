#include <stdio.h>
#include <math.h>
void main()
{
    float a,b,c,tot,avg;
    printf("enter marks of first subject : ");
    scanf("%f",&a);
    printf("enter marks of second subject : ");
    scanf("%f",&b);
    printf("enter marks of third subject : ");
    scanf("%f",&c);
    tot = a+b+c;
    printf("total marks = %.0f",tot);
    avg = (a+b+c)/3.0;
    if(avg>=70)
    {
        printf("\ngrade : distinction");
    }
    else if(avg>=60)
    {
        printf("\ngrade : first class");
    }
    else if(avg>=50)
    {
        printf("\ngrade : second class");
    }
    else if(avg>=35)
    {
        printf("\ngrade : third class");
    }
    else
    {
        printf("\ngrade : fail");
    }
}
