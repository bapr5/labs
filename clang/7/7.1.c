#include <termios.h>
#include <stdio.h> 

#include <ncurses.h> 
#include <stdlib.h> 
int ContentsFile(char* , char*); 
int* InitMassive(char* , char* ,unsigned ); 
void BubbleSort ( int* , unsigned ); 
void AddFile(char* , char* , int* ,unsigned ); 
int main(void) 
{ 
char FileName[20]; 
int * Massive; 
unsigned Number; 
printf("\nEnter the name of file: "); 
fgets(FileName,9999,stdin); 
//clrscr(); 
printf("\n The contents of the File <<%s>> :\n",FileName); 
Number = ContentsFile(FileName, "r"); 
if ( Number == 0 ) 
{ 
//clrscr(); 
printf("\tFile <<%s>> is empty!\n",FileName); 
printf("\n\t Press any key to exit..."); 
getch(); 
return 0; 
} 
Massive = InitMassive(FileName,"r",Number);
if ( Massive == NULL ) 
{ 
//clrscr(); 
printf("\tDinamic array don't exist!\n"); 
printf("\n\t Press any key to exit..."); 
getch(); 
return 0; 
} 
BubbleSort(Massive, Number); 
AddFile(FileName,"a",Massive,Number); 
free(Massive); 
printf("\n New contents of the File <<%s>> :\n", 
FileName); 
Number = ContentsFile(FileName, "r"); 
printf("\n Press any key to exit..."); 
getch(); 
return 0; 
} 
int ContentsFile(char* String, char* Mode) 
{ 
unsigned Number = 0, Term; 
FILE * FilePointer= fopen(String, Mode); 
if (FilePointer == NULL) return Number; 
while (!feof(FilePointer)) 
{ 
fscanf(FilePointer, "%d\n", &Term); 
printf( " %d", Term); 
Number ++; 
} 
fclose(FilePointer); 
return Number; 
}
int* InitMassive(char* String, char* Mode, 
unsigned Number) 
{ 
unsigned i; 
int* Pointer = (int*)malloc( Number * sizeof(int) ); 
FILE *FilePointer= fopen(String, Mode);
if (FilePointer== NULL) return NULL; 
for(i = 0; i < Number; i++) 
{ 
fscanf(FilePointer, "%d\n",&Pointer[i]); 
} 
fclose(FilePointer); 
return Pointer; 
} 
void BubbleSort ( int* Pointer, unsigned Number) 
{ 
unsigned i, j; 
int x; 
for( i = 0; i < Number; i ++) 
{ 
for( j = Number - 1 ; j > i; j --) 
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
void AddFile(char* String, char* Mode, int* Pointer, 
unsigned Number) 
{ 
unsigned i; 
FILE *FilePointer = fopen(String, Mode); 
if (FilePointer == NULL) 
{ 
printf("Can't open file to addition!"); 
getch(); 
exit(1); 
}
for( i = 0; i < Number; i++) 
{
fprintf(FilePointer, "%d\n",Pointer[i]); 
} 
fclose(FilePointer); 
}