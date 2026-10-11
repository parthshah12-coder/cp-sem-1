#include <stdio.h>
#include <math.h>
void main()
{
    float gs,ns;
    printf("enter gross sale : ");
    scanf("%f",&gs);
    if(gs>20000)
    {
        ns=gs-(0.15*gs);
        printf("net sales = %f",ns);
    }
    else if(gs<=20000 && ns>10000)
    {
        ns=gs-(gs*0.1);
        printf("net sales = %f",ns);
    }
    else
    {
        ns=gs-(gs*0.05);
        printf("net sales = %f",ns);
    }

}
