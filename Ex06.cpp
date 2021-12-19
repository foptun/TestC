#include <stdio.h>
#include <stdlib.h>

int main() {
    int a = 0;
    printf("Enter Number A: ");
    scanf("%d", &a);
    
    int b = 0;
    printf("Enter Number B: ");
    scanf("%d", &b);
    
    for (int i = a; i >= b ; i--) {
        printf("%d ", i);
    }
    return 0;
}
