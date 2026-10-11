#include <stdio.h>
#include <math.h>
void main()
{
    int a,b,c;
    printf("input first number : ");
    scanf("%d",&a);
    printf("input second number : ");
    scanf("%d",&b);
    printf("input third number : ");
    scanf("%d",&c);
    if(a>b && a>c)
    {
        if(b>c)
        {
            printf("a is largest and c is smallest");
        }
        else
        {
            printf("a is largest and b is smallest");
        }
    }
    else if(b>a && b>c)
    {
        if(a>c)
        {
            printf("b is largest and c is smallest");
        }
        else
        {
            printf("b is largest and a is smallest");
        }
    }
    else
    {
        if(a>b)
        {
            printf("c is largest and b is smallest");
        }
        else
        {
            printf("c is largest and a is smallest");
        }
    }


}
