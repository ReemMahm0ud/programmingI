#include <stdio.h>
#include <stdlib.h>
int unionarray(int array1[],int array2[],int n,int m);
int main()
{
   int array1[7],i,array2[7];
   printf("enter array 1 : ");
   for(i=0;i<7;i++)
   {
       scanf("%d",&array1[i]);
   }
   printf("enter array 2 : ");
   for(i=0;i<7;i++)
   {
       scanf("%d",&array2[i]);
   }
  ;
   printf("union is : %d",unionarray(array1,array2,7,7));

    return 0;
}
int unionarray(int array1[],int array2[],int n,int m)

{
    int i=0,j=0;

  {
      if(array1[i]==array2[j])
        printf("%d",array2[j++]);
        i++;
  }
}

