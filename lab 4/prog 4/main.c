#include <stdio.h>
#include <stdlib.h>
#include <math.h>
struct complex
{
   float real, imag;
}a, b, c,d,r,e,w;
   struct complex read(void);
   void write(struct complex);
   struct complex add(struct complex, struct complex);
   struct complex addreal (struct complex , float n);
    int compare (struct complex,struct complex);
int main()
{
    int n,x;
   printf("Enter the 1st complex number\n ");
   a = read();
   write(a);
   printf("Enter  the 2nd complex number\n");
   b = read();
   write(b);
   printf("Addition\n ");
   c = add(a, b);
   write(c);
   printf("enter a complex number to add real number :");
   d=read();
   write(d);
   printf("enter the real number :");
   scanf("%d",&n);
   printf("the result : \n");
   r= addreal(d,n);
   write(r);
   printf("enter two complex numbers to compare them :\n");
   printf("enter 1st complex number :\n");
   e=read();
   write(e);
   printf("enter 2nd number complex number :\n");
   w=read();
   write(w);
   compare(e,w);
  if(compare(e,w)==0)
    printf("they are equal");
    else
    printf("they are not equal");

    return 0;
}
struct complex read(void)
{
   struct complex t;
   printf("Enter the real part\n");
   scanf("%f", &t.real);
   printf("Enter the imaginary part\n");
   scanf("%f", &t.imag);
   return t;
}
void write(struct complex a)
{
   printf("Complex number  is\n");
   printf(" %.1f + i %.1f", a.real, a.imag);
   printf("\n");
}
struct complex add(struct complex p, struct complex q)
{
   struct complex t;
   t.real = (p.real + q.real);
   t.imag = (p.imag + q.imag);
   return t;
}
struct complex addreal (struct complex p , float n)
{
    struct complex x;
    x.real = (p.real + n);
    x.imag =(p.imag);
    return x;
};
 int compare (struct complex p,struct complex q)
{
    int y;
    float a,b;
    a=sqrt((p.real)*(p.real)+(p.imag)*(p.imag));
    b=sqrt((q.real)*(q.real)+(q.imag)*(q.imag));
    if (a==b)
        return y=0;
    else
        if (a>b)
        return y=1;
    else
        if (a<b)
        return y=1;
};
