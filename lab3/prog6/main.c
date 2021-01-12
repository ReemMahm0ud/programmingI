#include <stdio.h>
#include <stdlib.h>
#include<math.h>
void checkrighttriangle(int a,int b,int c,float *area, float *perimeter);
int main()
{
   int a , b, c;
   float area,perimeter;
    printf("Enter three sides of triangle: \n");
    scanf("%d%d%d", &a, &b, &c);
 checkrighttriangle( a, b, c, &area, &perimeter);

    return 0;
}
void checkrighttriangle(int a,int b,int c,float *area, float *perimeter)
{
    int vaild=0;
    float s;
    if((a+b)>c)
    {
        if((b+c)>a)
        {
            if((a+c) > b)
            {
                vaild=1;
            }
        }
    }
    if (vaild==1)
       {
        printf("Triangle is valid.\n");
        s=(a+b+c)/2;
        *area=sqrt(s*(s-a)*(s-b)*(s-c));
        *perimeter=a+b+c;
        printf("the area is %f",*area);
        printf("the perimeter is %f",*perimeter);
    }
    else
    {
        printf("Triangle is not valid.\n");
    }


}

