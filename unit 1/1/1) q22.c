#include <stdio.h>
#include <math.h>
void main()
{
    float gs,ns;
    printf("enter your gross salary : ");
    scanf("%f",&gs);
    ns=gs-(0.1*gs);
    printf("your net salary equals to : %.2f",ns);

}
