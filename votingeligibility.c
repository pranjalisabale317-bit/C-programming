#include<stdio.h>
int main(){
    int age;
    printf("\n Enter ur age:");
    scanf("\n %d",&age);
   
    if(age>=18)
        printf("\n you are eligible for votting",age);
    else
        printf("\n you are not eligible for votting",age);
    return 0;
        
}
