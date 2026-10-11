#include <stdio.h>
#include <math.h>
void main()
{
    int a;
    printf("enter a number : ");
    scanf("%d",&a);
    if(a%7==0)
        printf("your number is divisible by 7");
    else
        printf("your number is not divisible by 7");
}
