#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int min = 0;
    int max = 0;
    for (int i = 1; i <= 10 ; i++) {
        int x = 0;
        printf("Enter Number (%d): ", i);
        scanf("%d", &x);
        
        if (i == 1) {
            min = x;
            max = x;
        }
        
        if (min > x) {
            min = x;
        }
        
        if (max < x) {
            max = x;
        }
    }
    
    printf("Min: %d\n", min);
    printf("Max: %d", max);
    
    return 0;
}
