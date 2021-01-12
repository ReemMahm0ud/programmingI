#include <stdio.h>
#include <stdlib.h>
struct student_t {char name[60];int ID; float GPA;}
s[1000],t;
void addgpa2 (struct student_t , int );
void display (struct student_t,int );
struct student_t maxmark (struct student_t,int);
int main()
{ int n,i;
printf("enter the number of students :\n");
scanf("%d",&n);
printf("enter the names of students :\n");
for(i=0;i<n;i++)
{
    scanf("%s",s[i].name);
}
printf("enter the IDs of the students :\n");
for (i=0;i<n;i++)
{
    scanf("%d",s[i].ID);
}
printf("enter the GPA of the students :\n");
for (i=0;i<n;i++)
{
    scanf("%f",s[i].GPA);
}
  addgpa2 (s , n);
 display(s,n);
 t=maxmark(s,n);
 printf("the name and ID of the max mark :%s \t %d ",t.name,t.ID);


    return 0;
}

void addgpa2 (struct student_t x , int n)
{
    int j;
    for(j=0;j<n;j++)
        if(x[j].GPA<2)
    {
        x[j].GPA=x[j].GPA+0.2;
    }

}
void display (struct student_t p,int n )
{
    int k;
    for(k=0;k<n;k++)
    {
        printf("%s \t %d \t %f \n",p[k].name,p[k].ID,p[k].GPA);
    }
}
struct student_t maxmark (struct student_t q,int n)
{
    int r;
    struct student_t y;
    for (r=0;r<n;r++)
    {
       if(q[r].GPA>q[r+1].GPA)
            y=q[r].GPA;
    }
    return y;
};
