#include <stdio.h>
#include <stdlib.h>
#include <curses.h>
#include <time.h>
#define N 50
#define M 60
void input(int*, int);
void output(int*, int);
double positive(int*, int );
double negative(int*, int);
int main()
{
int X[N],A[M];
srand(time(0));
printf("1 massiv:\n\n");
input(&X[0], N);
output(&X[0], N);
printf("2 massiv:\n\n");
input(&A[0], M);
output(&A[0], M);
printf("\n\n\nSumma=%lf",( positive(&X[0], N)+ negative(&A[0], M))/2);
//getch();
}
void input(int* m, int n)
{
int i;
for(i=0; i<n; i++)
*(m+i) =-5+rand()%10;
}
void output(int* m, int n)
{
int i;
for(i=0; i<n; i++)
printf("%5d", *(m+i)) ;
printf("\n\n\n");
}
double positive(int *m,int n)
{
int i,sum=0;
for(i=0;i<n;i++)
{
if(*(m+i)>0)
sum=sum+(*(m+i));
}
return sum;
}
double negative(int *m,int n)
{
int i,sum=0;
for(i=0;i<n;i++)
{
if(*(m+i)<0)
sum=sum+(*(m+i));
}
return sum;
}
