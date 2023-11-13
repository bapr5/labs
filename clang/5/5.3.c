#include <curses.h>
#include <stdio.h> 
#include <math.h> 
#include <stdlib.h> 
#define TRUE 1 
int* InitArray ( unsigned); 
void DisplayArray ( int*, unsigned); 
void BubbleSort( int* , unsigned);

int main(void) 
{ 
unsigned Dimension; 
int* Massive; 
while(TRUE) 
{ 
printf("Enter dimention of massive: "); 
scanf("%u", &Dimension); 
if (Dimension > 0) break; 
printf("\n Dimention is incorrect!!! Try again!!!\n"); 
}
//clrscr(); 
Massive = InitArray (Dimension); 
//clrscr(); 
if ( Massive == NULL ) 
{ 
printf("\nDynamic array don't exist!\n"); 
printf("\nPress any key to exit... "); 
getch(); 
return 0; 
} 
printf("\tSource array\n"); 
DisplayArray (Massive, Dimension);
BubbleSort (Massive, Dimension); 
printf("\n\tSelected array\n"); 
DisplayArray (Massive, Dimension); 
free(Massive); 
printf("\nPress any key to exit... "); 
getch(); 
return 0; 
}
int* InitArray ( unsigned n ) 
{ 
int* Pointer = (int*)malloc(n*sizeof(int)); 
unsigned i; 
if ( Pointer == NULL ) return NULL; 
printf("\n Enter the elemets of array: \n"); 
for ( i = 0; i < n; i++ ) 
{ 
printf("\nA[%u] = ",i); 
scanf("%d",&*(Pointer + i)); 
} 
return Pointer; 
}
void DisplayArray ( int* Pointer, unsigned n ) 
{ 
unsigned i; 
for ( i = 0; i < n; i++) 
{ 
printf(" %d",*( Pointer + i)); 
} 
} 
void BubbleSort ( int* Pointer, unsigned n) 
{ 
unsigned i, j; 
int x; 
for( i = 0; i < n ; i ++) 
{ 
for( j = n - 1 ; j > i; j --)
{ 
if (Pointer [j] < Pointer [j-1] ) 
{ 
x = Pointer[j]; 
Pointer[j] = Pointer[j-1]; 
Pointer[j-1] = x; 
} 
} 
} 
}