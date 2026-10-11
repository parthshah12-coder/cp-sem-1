#include <stdio.h>
#include <math.h>
void main()
{
    int a=2,b=3;
    printf("a = %d",a);
    printf("\nb = %d",b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\nnew a = %d",a);
    printf("\nnew b = %d",b);


}
