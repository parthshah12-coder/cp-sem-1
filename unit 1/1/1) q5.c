#include <stdio.h>
#include <math.h>
int main()
{
    float a,b;
    printf("input first number : ");
    scanf("%f", &a);
    printf("input second number : ");
    scanf("%f", &b);

    printf("addition of two given numbers equals to : %.0f",a+b);
    printf("\ndifference of two given numbers equals to : %.0f",a-b);
    printf("\nmultiplication of two given numbers equals to : %.0f",a*b);
    printf("\ndivision of two given numbers equals to : %.2f",a/b);

return 0;
}
