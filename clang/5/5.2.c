#include <stdio.h> 
#include <curses.h>
#include <math.h> 
#include <ncurses.h>
#define TRUE 1 
void InputArray ( int* , unsigned); 
void DisplayArray ( int*, unsigned); 
void BubbleSort( int* , unsigned); 
int main(void) 
{ 
unsigned const DIM = 100;
int Massive[DIM]; 
unsigned n;
while(TRUE) 
{ 
printf("Enter n <= %d - dimention of massive:", 
DIM); 
scanf("%u", &n); 
if ((n > 0) && (n <= DIM)) break; 
printf("\n Dimention is incorrect!!! Try again!!!\n"); 
}
printf("\nEnter the elements of massive:\n"); 
InputArray ( Massive, n ); 
//clrscr(); 
printf("\tSource array\n"); 
DisplayArray ( Massive, n ) ; 
BubbleSort( Massive, n ); 
printf("\tSelected array \n"); 
DisplayArray ( Massive, n ) ; 
printf("\nPress any key to exit..."); 
getch(); 
return 0; 
}
void InputArray ( int* A, unsigned n ) 
{ 
unsigned i; 
for ( i = 0; i < n; i++ ) 
{ 
printf("\nA[%u] = ",i); 
scanf("%d",&*(A + i)); 
} 
}
void DisplayArray ( int* A, unsigned n ) 
{ 
unsigned i; 
for ( i = 0; i < n; i++ ) 
{ 
printf("%d ",*(A + i)); 
}
} 
void BubbleSort ( int* A, unsigned n) 
{ 
unsigned i, j; 
int x;
for( i = 0; i < n ; i ++) 
{ 
for( j = n - 1; j > i; j --) 
{ 
if (*(A + j) < *(A + j - 1) ) 
{ 
x = *(A + j); 
*(A + j) = *(A + j - 1); 
*(A + j - 1) = x; 
} 
} 
} 
}