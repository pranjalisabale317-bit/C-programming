#include<stdio.h>
int add(int a,int b)
{
    printf("\nAddition:%d",a+b);
    return 1;
}
int main(){
    int p,q;
    add(100,100);
    printf("\n Enter p and q  :");
    scanf("\n %d\n%d",&p,&q);
    add(p,q);
    return 0;
}
