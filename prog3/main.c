#include <stdio.h>
#include <stdlib.h>



int main()
{
  float a[100],x;
  float sum=0.0;
  int i,n;
  float avg;
  printf("enter the numbers of the elements : ");
  scanf("%d",&n);
  printf("enter the numbers of the array :");
  for (i=0;i<n;i++)
   {
    scanf("%f",&a[i]);
    sum+=a[i];
}
 avg = sum / n;
printf("average of the array is : %.2f\n",avg);
for (i=0;i<n;i++)
{
  x = a[i]-avg;
  printf("%d  a=%5.2f  b=%5.2f\n",i+1,a[i],x);
}
return 0;
}
