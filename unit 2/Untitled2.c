#include <stdio.h>
#include <math.h>
void main()
{

    char s[30];
    printf("enter any string ");
    gets(s);

    int i = 0;
    while(s[i] != 0)
    {
        if(s[i]>='A' && s[i]<='Z')
        {
            s[i]=s[i]+32;
            i++;
        }
    }
    printf("Lower case string is : %s",s);

}
