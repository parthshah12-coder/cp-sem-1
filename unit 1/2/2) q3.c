#include <stdio.h>
#include <math.h>
void main()
{
    float gs,ns,al,de;
    printf("enter your gross salary : ");
    scanf("%f",&gs);
    if(gs>10000)
    {
        ns=gs+(gs*0.1)-(de*0.03);
        printf("net salary = %f",ns);
    }
    else if(gs>5000 && gs<=10000)
    {
        ns=gs+(gs*0.07)-(gs*0.02);
        printf("net salary = %f",ns);
    }
    else
        printf("net salary = %f",gs);

}
