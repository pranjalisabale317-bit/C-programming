#include<stdio.h>
#include<conio.h>

int fact(int x)
{
    if(x==1)
    {
        return 1;
    }
    else
    {
        return x*fact(x-1);
    }
}

void main()
{
    int p;
    clrscr();

    printf("\n Enter p:");
    scanf("%d",&p);

    printf("\n factorial:%d",fact(p));

    getch();
}
