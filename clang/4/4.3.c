#include <stdio.h>
//#include <conio.h>
#include <curses.h>
#include <termios.h>

#define TRUE 1

int main(){
    char c;
    const unsigned DIM = 10;
    double A[DIM] [ DIM];
    unsigned n,m,i,j,i_max,j_max;
    while(TRUE){
        printf("Enter n,m <= %d - dimensions of matrix:");
        scanf("%u%u",&n,&m);
        if((n>0)&&(n<=DIM) && (m>0) && (m<=DIM)) break;
        printf("\n Incorrext dimensions! Try again. \n");
    }
   // clrscr();
   printf("\n Source Matrix \n");
   for (i=0;i<n;i++){
    for (j=0;j<m;j++){
        A[i][j]=10./(i+j+1);
        printf("%8.41f",A[i][j]);
    }
    printf("\n");
   }
   i_max=0,j_max=0;
   for(i=0;i<n;i++){
    for(j=0;j<m;j++){
        if(A[i][j]>A[i_max][j_max]){
            i_max=i;j_max=j;
        }
    }
   }
   printf("Maximum element A[%d,%d] = %8.41f",i_max,j_max,A[i_max][j_max]);
   printf("Any key to exit");
   c = getch();
   return 0;
}
