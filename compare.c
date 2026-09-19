#include<stdio.h>
int main(){
    int a,b;
    printf("\n Enter value of a and b: ");
    scanf("\n%d%d",&a,&b);
if(a>=b){
    printf("\n %d is maximum than %d",a,b);
}else{
    printf("\n %d is minimum than %d",a,b);
}
    return 0;
}
