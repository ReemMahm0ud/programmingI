#include <stdio.h>
#include <stdlib.h>
float power (float base , float n)
{
    if (0==n)
    {
        return 1;
    }
    else if (1 !=n)
    {
        base*=power(base,n-1);
    }
    else if(n<0)
    {
        return 1/power(base,-n);
    }
    return base;
}
int main()
{
    float base,n;
    printf("enter base :");
    scanf("%f",&base);
    printf("enter n :");
    scanf("%f",&n);
    printf("the answer is :%f",power(base,n));
}
