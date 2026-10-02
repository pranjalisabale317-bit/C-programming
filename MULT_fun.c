#include<stdio.h>
int mult(int a,int b)
{
    printf("\nmul:%d",a*b);
    return 1;
}
int main(){
    int p,q;
    mult(100,100);
    printf("\n Enter p and q  :");
    scanf("\n %d\n%d",&p,&q);
    mult(p,q);
    return 0;
}
