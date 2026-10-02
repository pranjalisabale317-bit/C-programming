#include<stdio.h>
int check()
{
    int x;
    printf("\n Enter x:");
    scanf("\n%d",&x);
    if(x%2==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main(){
    int ans;
    ans=check();
    if(ans==1)
    {
      printf("\n x is even num");   
    }
    else
    {
         printf("\n x is odd num");
    }
    return 0;
}
