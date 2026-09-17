#include<stdio.h>
int main()
{
    int num;
    printf("\n Enter an integre value:");
    scanf("\n %d",&num);
    if(num%2==0)
    {
        printf("\n%d is even",num);
    }
    else
    {
        printf("\n %d is odd",num);
    }
return 0;
}
