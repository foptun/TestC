#include <stdio.h>
#include <stdlib.h>

int main() {
    int r = 0;
    printf("Enter Row Number (R): ");
    scanf("%d", &r);
    
    int n = 0;
    printf("Enter N: ");
    scanf("%d", &n);
    
    for (int i = 1; i <= n ; i++) {
        printf("%d ", i);
        if (i % r == 0) {
            printf("\n");
        }
    }
    
    
    
    return 0;
}
