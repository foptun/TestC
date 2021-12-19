#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 0;
    printf("Enter a Number: ");
    scanf("%d", &n);
    
    for (int i = 0; i < n ; i++) {
        printf("*");
    }
    
    printf("\n\n");
    printf("Enter a Number: ");
    scanf("%d", &n);
    
    for (int i = 0; i < n ; i++) {
        printf("*\n");
    }
    
    return 0;
}
