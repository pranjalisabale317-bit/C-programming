#include<stdio.h>
int add(int a,int b,int c)
{
    return a+b+c;
}
int main(){
    int p,q,r;
    printf("\n Enter p,q and r :");
    scanf("\n %d\n%d\n%d",&p,&q,&r);
    printf("\n Addition :%d",add(p,q,r));
    return 0;
}
