#include <stdio.h>
#include <stdlib.h>

int main() {
    int sum = 0;
    
    int x = 0;
    printf("Enter Number X: ");
    scanf("%d", &x);
    
    int n = 0;
    printf("Enter Number N: ");
    scanf("%d", &n);
    
    for (int i = x; i <= n ; i++) {
        printf("%d + ", i);
        sum = sum + i;
    }
    
    
    printf("\b\b= %d", sum);
    
    return 0;
}
