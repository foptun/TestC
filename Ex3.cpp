#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 0;
    printf("Enter a Number: ");
    scanf("%d", &n);
    
    for (int i = 1; i <= n ; i++) {
        printf("%d ", i);
    }
    return 0;
}
