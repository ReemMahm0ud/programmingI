#include<stdio.h>
#include<stdlib.h>
void rand_mines(char msweep[12][12]);
void printmatrix(int r,char user_chart[12][12]);
int process(char msweep[12][12],int r,int c,char user_chart[12][12]);

int main()

{

    char msweep[12][12] = {{'0'}};
    int i,r,c;
    char user_chart[12][12] = {{'0'}};
    rand_mines(msweep);
    printf("Enter your location between 1 - 11.\n");
    printf("Enter x variable\n");
    scanf("%d",&r);
    printf("Enter y variable\n");
    scanf("%d",&c);
    printmatrix(12,user_chart);
    i = process(msweep,r,c,user_chart);
    while(i == 1)
    {
    printf("next step\n");
    printf(" %c Surrounding MINEs\n\n",msweep[r][c]);
    printmatrix(12,user_chart);
        printf("Enter your location between 1 - 11.\n");
        printf("Enter x variable\n");
        scanf("%d",&r);
        printf("Enter y variable\n");
        scanf("%d",&c);
    i=0;
    i = process(msweep,r,c,user_chart);
    }
    if(i==0)
    printf("game over\n");
    return 0;
}

void rand_mines(char msweep[12][12])
{
    int r,c,m;
    for(m=0;m<20;m++) // plant 20 rand mines(m
    {
    r = rand() % 13; // this is mine planting
    c = rand() % 13; // so 0 to 13 is APPROPRIATE.
    msweep[r][c] = '9';
    }
    return;
}
void printmatrix(int r,char user_chart[12][12])
{
    int i,j;
    printf(" ##########\n");
    for(i=1;i<r;i++)
    {
    printf("#");
    for(j=1;j<12;j++)
    {
        printf("%c ",user_chart[i][j]);
    }
    printf("#");
    printf("\n");
    }
    printf(" ###########\n\n");
    return;
}
int process(char msweep[12][12],int r,int c,char user_chart[12][12])
{
    int i=r,j=c,b=0,k;
    char C;
    if(msweep[r][c] == '9')
    {  k=0;
    return k;
    }
    else
    {
    if(msweep[i-1][j-1] == '9')
        b++;
    if(msweep[i-1][j] == '9')
        b++;
    if(msweep[i-1][j+1] == '9')
        b++;
    if(msweep[i][j-1] == '9')
        b++;
    if(msweep[i][j+1] == '9')
        b++;
    if(msweep[i+1][j-1] == '9')
        b++;
    if(msweep[i+1][j] == '9')
        b++;
    if(msweep[i+1][j+1] == '9')
        b++;
    C = (char)(((int)'0')+b);
    msweep[r][c] = C;
    user_chart[r][c] = C;
    }
    return 1;
}
