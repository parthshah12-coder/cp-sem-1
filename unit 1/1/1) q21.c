#include <stdio.h>
#include <math.h>
void main()
{
    float ns,gs,de,al;
    printf("enter your gross salary : ");
    scanf("%f",&gs);
    al=0.1*gs;
    de=0.03*gs;
    ns=(gs+al)-de;
    printf("your net salary equals to : %.2f",ns);


}
