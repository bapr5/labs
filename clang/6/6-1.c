#include <stdio.h>
#include <stdlib.h>
#include <curses.h>
#include <time.h>
#define n1 2
#define m1 3
#define n2 4
#define m2 4
void input(int*, int, int);
void output(int*, int, int);
void zamena(int*, int, int);
void input(int *a, int n, int m)
{
int i, j;
for (i = 0; i < n; i++)
for (j = 0; j < m; j++)
scanf("%d", &a[m*i+j]);}
void output(int *a, int n, int m)
{
int i, j;
for (i = 0; i < n; i++) {
for (j = 0; j < m; j++)
printf("%d ", a[m*i+j]);
printf("\n");
}
}
void change(int *a, int n, int m)
{
int i, j;
for (i = 0; i < n; i++) {
for (j = 0; j < m; j++)
if (a[m*i+j]&&!(a[m*i+j]%3);
}
}
int main()
{
int A[n1][m1],B[n2][m2];
srand(time(0));
printf("Enter matrix 1:\n\n");
input(&A[0][0], n1, m1);
printf("\n");
output(&A[0][0], n1, m1);
printf("\nEnter matrix 2:\n\n");
input(&B[0][0], n2, m2);
printf("\n");
output(&B[0][0], n2, m2);
printf("\nChange matrix 1:\n\n");
change(&A[0][0], n1, m1);
output(&A[0][0], n1, m1);
printf("\nChange matrix 2:\n\n");
change(&B[0][0], n2, m2);
output(&B[0][0], n2, m2);
getch();
return 0;}
