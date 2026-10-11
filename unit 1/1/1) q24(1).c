#include <stdio.h>
#include <math.h>
void main()
{
    int a,b,c;
    a=2;
    b=3;
    printf("a = %d",a);
    printf("\nb = %d",b);
    c=a;
    a=b;
    b=c;
    printf("\nnew a = %d",a);
    printf("\nnew b = %d",b);

}
