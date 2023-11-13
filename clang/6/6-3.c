#include <stdio.h> 
#include <curses.h>
#include <string.h> 
#include <stdlib.h> 
typedef struct 
{ 
char FirstName[15], SecondName[15], LastName[15]; 
int Age; 
char Sex [7]; 
} Person; 
Person InitPerson (); 
Person* InitArray ( int); 
void DisplayArray (Person* , int ); 
void DisplayChoise (Person* , int , char* , int , int ); 
void DisplayPerson (Person ); 
void SortFirstName(Person* , int ); 
int main(void) 
{ 
int Dimension; 
char SexTag [7]; 
int LowAge, UpperAge; 
Person* MassiveStruct; 
printf("\nEnter the number of persons:"); 
scanf("%d",&Dimension);

MassiveStruct = InitArray (Dimension); 
if ( MassiveStruct == NULL ) 
{ 
printf("\nDynamic array don't exist!\n"); 
printf("\nPress any key to exit..."); 
getch(); 
return 0; 
} 
printf("\nThe list of persons: \n"); 
DisplayArray (MassiveStruct,Dimension); 
printf("\nEnter the sex-tag: "); 
scanf("%s",SexTag); 
printf("\nEnter the boundary of age: "); 
scanf("%d%d",&LowAge,&UpperAge); 
printf("\n\nThe list of choise-persons: \n"); 
DisplayChoise(MassiveStruct,Dimension,SexTag, 
LowAge,UpperAge); 
printf("\n\nThe sorting list of persons: \n"); 
SortFirstName(MassiveStruct,Dimension); 
DisplayArray (MassiveStruct,Dimension); 
free(MassiveStruct); 
printf("\nPress any key to exit...\n"); 
getch(); 
return 0; 
}

Person InitPerson() 
{ 
Person Man; 
printf("\nEnter first name:"); 
scanf("%s", Man.FirstName); 
printf("Enter second name:"); 
scanf("%s", Man.SecondName); 
printf("Enter last name:"); 
scanf("%s", Man.LastName); 
printf("Enter age:"); 
scanf("%d",&Man.Age); 
printf("Enter sex:");
scanf("%s", Man.Sex); 
return Man; 
} 
Person* InitArray (int Dimension) 
{ 
int i; 
Person* Massive = 
(Person*)malloc(Dimension*sizeof(Person)); 
if ( Massive == NULL ) return NULL; 
for( i = 0; i < Dimension; i++) 
{ 
printf("\nEnter the information about %d person \n",i + 1); 
Massive[i] = InitPerson(); 
} 
return Massive; 
}
void DisplayArray (Person* Massive, int Dimension) 
{ 
int i; 
for( i = 0; i < Dimension; i++ ) 
{ 
DisplayPerson(Massive[i]); 
} 
} 
void DisplayChoise(Person* Massive, int Dimension, 
char* SexTag, int LowAge, int UpperAge) 
{ 
int i; 
for( i = 0; i < Dimension; i++ ) 
{ 
if ( strcmp(Massive[i].Sex,SexTag)==0 && 
Massive[i].Age <= UpperAge && 
Massive[i].Age >= LowAge) DisplayPerson(Massive[i]); 
} 
}
void DisplayPerson (Person Man) 
{ 
printf("\n%s %s %s, %d year, %s ",Man.FirstName, 
Man.SecondName, Man.LastName, Man.Age, Man.Sex); 
} 
void SortFirstName(Person* Massive, int Dimension) 
{ 
int i, j; 
Person Help;
for( i = 0; i <= Dimension; i ++) 
for( j = Dimension-1; j > i; j --) 
if (strcmp(Massive[j].FirstName, 
Massive[j-1].FirstName)<0 ) 
{ 
Help = Massive[j]; 
Massive[j] = Massive[j-1]; 
Massive[j-1] = Help; 
} 
}
