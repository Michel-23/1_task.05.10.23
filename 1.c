#include <stdio.h>
#include <locale.h>

int main()
{
    float sessia1, sessia2, sessia3, a;
    printf("input sessia1=");
    scanf("%f", &sessia1);
    printf("input sessia2=");
    scanf("%f", &sessia2);
    printf("input sessia3=");
    scanf("%f", &sessia3);
    a=(sessia1+sessia2+sessia3)/3;
    if (a<3.5)
    {
        printf("troechnik");
    }
    if (a<4.5)
    {
        if (a>=3.5)
        printf("horochist");
    }
    if (a>=4.5)
    {
        printf("otlichnik");
    }
    return 0;
}