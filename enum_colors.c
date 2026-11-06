#include<stdio.h>
#include<conio.h>

enum color
{
    red,
    yellow,
    blue,
    pink=3,
    light_pink=4,
    baby_pink=5
};

void main()
{
    clrscr();

    printf("\nred=%d\tyellow=%d\tblue=%d\tpink=%d\tlight pink=%d\tbaby pink=%d",
    red,yellow,blue,pink,light_pink,baby_pink);

    getch();
}
