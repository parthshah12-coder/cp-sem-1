#include <stdio.h>
#include <math.h>
void main()
{
    float l,w,a,p;
    printf("enter length of rectangle : ");
    scanf("%f",&l);
    printf("enter width of rectangle : ");
    scanf("%f",&w);
    a=l*w;
    p=2*(l+w);
    printf("area of rectangle = %.2f m^2",a);
    printf("\nperimeter of rectangle = %.2f m",p);

}
