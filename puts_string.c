#include <stdio.h>
#include <string.h>

int main() {
    char nm1[100];
    
    printf("\nEnter name: ");
    fgets(nm1, sizeof(nm1), stdin);
    nm1[strcspn(nm1, "\n")] = '\0';
    
    printf("\nName:%s", nm1);
    
    printf("\nUsing puts function:\n");
    puts(nm1);
    
    return 0;
}
