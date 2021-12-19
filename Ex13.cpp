#include <stdio.h>
#include <stdlib.h>

int main() {
    // ยังไม่เสร็จ
    int n = 0;
    printf("Enter Number: ");
    scanf("%d", &n);
    
    printf("\n===== Show Type 1 =====\n");
    for (int i = 0; i < n ; i++) {
        for (int j = 0; j < n; j++) {
            printf("*");
        }
        printf("\n");
    }
    
    printf("\n===== Show Type 2 =====\n");
    for (int i = 0; i < n ; i++) {
        for (int j = 0; j < n; j++) {
            printf("*");
        }
        printf("\n");
    }
    
    printf("\n===== Show Type 3 =====\n");
    for (int i = 0; i < n ; i++) {
        for (int j = 0; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    
    printf("\n===== Show Type 4 =====\n");
    for (int i = 0; i < n ; i++) {
        for (int j = 0; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    
    
    return 0;
}
