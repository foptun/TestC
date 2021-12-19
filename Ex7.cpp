#include <stdio.h>
#include <stdlib.h>

int main() {
    int sum = 0;
    int n = 0;
    printf("Enter Number: ");
    scanf("%d", &n);
    
    for (int i = 1; i <= n ; i++) {
        printf("%d + ", i);
        sum = sum + i;
    }
    
    
    printf("\b\b= %d", sum);
    
    return 0;
}
