#include<stdio.h>
#include<conio.h>
struct Student{
int rn;
char nm[120];
float marks;
}
s1;
void main(){
  clrscr();
printf("\nstructure size:%d",sizeof(Student));
printf("\nEnter roll no,name and marks:");
scanf("\n%d\n%s\n%f",&s1.rn,&s1.nm,&s1.marks);
printf("\nroll no:%d\tName:%s\tMarks:%f",s1.rn,s1.nm,s1.marks);
getch();
}
