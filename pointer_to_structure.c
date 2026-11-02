#include<stdio.h>
#include<conio.h>
struct Student{
int rn;
char nm[120];
float marks;
}
s1;
struct Student *ptr=&s1;
void main ()
{
  clrscr();
printf("\n Structure size:%d",sizeof(Student));
printf("\n Enter Roll no,Name and Marks:");
scanf("\n%d\n%s\n%f",&s1.rn,&s1.nm,&s1.marks);
printf("\nRoll no:%d\tName:%s\tMarks:%f",(*ptr).rn,(*ptr).nm,(*ptr).marks);
getch();
}
