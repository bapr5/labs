#include <inttypes.h>
#include <unistd.h>
#define __int64 int64_t
#define _close close
#define _read read
#define _lseek64 lseek64
#define _O_RDONLY O_RDONLY
#define _open open
#define _lseeki64 lseek64
#define _lseek lseek
#define stricmp strcasecmp
#include <stdio.h> 
#include <ncurses.h> 
#include <stdlib.h> 


#define TRUE 1 
typedef struct 
{ 
char FirstName[15], SecondName[15], LastName[15]; 
unsigned Age; 
char Sex [7]; 
} Person; 
void InitFile (char* , char* , long ); 
Person* InitPerson (); 
void DisplayFile (char* , char* ); 
void DisplayPerson (Person* ); 
void AddToEndFile (char* , char* , long ); 
void RemoveElementFromFile (char* , char* , long ); 
int main(void)

{ 
char FileName[20]; 
char Key; 
long Number; 
puts("Enter the name of file: "); 
fgets(FileName); 
//clrscr(); 
while(TRUE) 
{ 
printf("\n Enter the number - the mode of operations with file:" 
"\n 1 - FORMATION OF THE FILE" 
"\n 2 - VIEWING OF CONTENTS OF THE FILE" 
"\n 3 - ADD AN ELEMENT TO AND OF FILE" 
"\n 4 - REMOVE THE ELEMENT IN THE FILE" 
"\n 5 - EXIT\n"); 
fflush(stdin); 
scanf("%c",&Key); 
//clrscr(); 
switch (Key) 
{ 
case '1': 
while(TRUE) 
{ 
printf("\nEnter the number of persons:"); 
scanf("%ld",&Number); 
if (Number > 0) break; 
printf("\n Number is incorrect! Try again!!!\n"); 
} 
InitFile (FileName,"wb",Number); 
printf("\n\nPress any key to return in the menu..."); 
getch(); 
//clrscr(); 
break;

case '2': 
DisplayFile(FileName,"rb"); 
printf("\n\nPress any key to return in the menu..."); 
getch(); 
//clrscr(); 
break;
case '3': 
while(TRUE) 
{ 
printf("\nEnter the number of persons to addition:"); 
scanf("%ld",&Number); 
if (Number > 0) break; 
printf("\n Number is incorrect! Try again!!!\n"); 
} 
AddToEndFile(FileName,"ab",Number); 
printf("\n\nPress any key to return in the menu..."); 
getch(); 
//clrscr(); 
break; 
case '4': 
printf("\nEnter number of element from removing :"); 
scanf("%ld",&Number); 
RemoveElementFromFile(FileName, "r+b", 
Number); 
printf("\n\nPress any key to return in the menu..."); 
getch(); 
//clrscr(); 
break; 
case '5': return 0; 
default: 
printf("\nIncorrect input!Try again!!!"); 
printf("\n\nPress any key to return in the menu..."); 
getch(); 
//clrscr(); 
break; 
} 
}
} 
void InitFile(char* String, char* Mode, long n) 
{ 
long i; 
int BufSize = sizeof(Person); 
Person* Man; 
FILE* FileStruct = fopen(String, Mode); 
if (FileStruct == NULL) 
{ 
printf("Can't open file to write."); 
getch(); 
abort(); 
} 
for( i = 1; i <= n; i++) 
{ 
printf("\nEnter information for the person number %ld \n", i); 
Man = InitPerson(); 
fwrite(Man, BufSize, 1, FileStruct); 
} 
free(Man); 
fclose(FileStruct); 
}
void AddToEndFile(char* String, char* Mode, long n) 
{ 
long i; 
int BufSize = sizeof(Person); 
Person* Man; 
FILE* FileStruct = fopen(String, Mode); 
if (FileStruct == NULL) 
{ 
printf("Can't open file to write."); 
getch(); 
abort(); 
} 
for( i = 1; i <= n; i++) 
{ 
printf("\nEnter information for the person number %ld \n", i); 
Man = InitPerson(); 
fwrite(Man, BufSize,1, FileStruct); 
} 
free(Man); 
fclose(FileStruct); 
}
void RemoveElementFromFile(char* String, char* Mode, 
long Position) 
{ 
FILE* FileStruct = fopen(String, Mode); 
int DescriptorFile = fileno(FileStruct); 
long LengthFile = filelength(DescriptorFile); 
int BufSize = sizeof(Person); 
Person* Man = (Person*)malloc(BufSize); 
long NewLength = LengthFile - BufSize; 
if (FileStruct == NULL) 
{ 
printf("Can't open file to write."); 
getch(); 
abort(); 
} 
fseek(FileStruct,Position * BufSize,SEEK_SET); 
while(fread(Man, BufSize,1, FileStruct) != 0) 
{ 
fseek(FileStruct, -2 * (long)BufSize ,SEEK_CUR); 
fwrite(Man,BufSize,1, FileStruct); 
fseek(FileStruct, (long) BufSize,SEEK_CUR); 
} 
DescriptorFile = chsize(DescriptorFile, NewLength); 
free(Man); 
fclose(FileStruct); 
} 
Person* InitPerson() 
{ 
Person* Man = (Person*)malloc(sizeof(Person)); 
printf("\nEnter first name:"); 
scanf("%s", Man ->FirstName);
printf("\nEnter second name:"); 
scanf("%s", Man ->SecondName); 
printf("\nEnter last name:"); 
scanf("%s", Man ->LastName); 
printf("\nEnter age:"); 
scanf("%d",& Man ->Age); 
printf("\nEnter pol:"); 
scanf("%s", Man ->Sex); 
return Man; 
} 
void DisplayFile(char* String, char* Mode) 
{ 
int BufSize = sizeof(Person); 
Person* Man = (Person*)malloc(BufSize); 
FILE* FileStruct = fopen(String, Mode); 
if ( FileStruct == NULL) 
{ 
printf("Can't open file to read."); 
getch(); 
abort(); 
} 
while(fread(Man,BufSize,1, FileStruct) != 0) 
{ 
DisplayPerson(Man); 
} 
free(Man); 
fclose(FileStruct); 
} 
void DisplayPerson (Person* Man) 
{ 
printf("\n%s %s %s, %d year, %s ", Man->FirstName, 
Man->SecondName, Man->LastName, Man->Age, 
Man->Sex); 
}