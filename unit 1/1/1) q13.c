#include <stdio.h>
#include <math.h>
void main()
{
    double b,kb,mb,gb;
    printf("enter value in bytes : ");
    scanf("%lf",&b);
    kb=b/1024;
    mb=b/1048576;
    gb=b/1073741824;
    printf("value in kb = %.9lf",kb);
    printf("\nvalue in mb = %.9lf",mb);
    printf("\nvalue in gb = %.11lf",gb);

}
