#include<stdio.h>
#include<conio.h>

struct Student
{
    int rn;
    char nm[120];
    float marks;
}s1;

struct Student *ptr=&s1;

void display()
{
    printf("\n Structure size:%d",sizeof(struct Student));

    printf("\n Enter Roll no,Name and Marks:");
    scanf("%d%s%f",&s1.rn,s1.nm,&s1.marks);

    printf("\nRoll no:%d\tName:%s\tMarks:%f",
    (*ptr).rn,(*ptr).nm,(*ptr).marks);
}

void main()
{
    clrscr();

    display();

    getch();
}
