#include<stdio.h>
#include<string.h>
int main(){
    char nm1[100],nm2[600];
    printf("\n Enter name1:");
    fgets(nm1, sizeof(nm1), stdin);
    nm1[strcspn(nm1, "\n")] = '\0';
    printf("\nName=%s",nm1);
    strcpy(nm2,nm1);
    printf("\n After copy:%s",nm2);
    return 0;
}
