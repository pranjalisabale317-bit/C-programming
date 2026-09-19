#include<stdio.h>
int main(){
    int num1,num2;
    printf("\nEnter two num : ",num1,num2);
    scanf("\n%d\n%d",&num1,&num2);
    printf("\n Addition: %d+%d=%d",num1,num2,num1+num2);
    printf("\n substraction: %d-%d=%d",num1,num2,num1-num2);
    printf("\n Multiplication: %d*%d=%d",num1,num2,num1*num2);
    if(num2!=0)
        printf("\n division: %d/%d=%d",num1,num2,num1/num2);
    else
        printf("\n Invalid (division by zero is not valid!");
    return 0;
}
