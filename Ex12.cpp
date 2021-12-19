#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int n = 0;
    printf("Enter N: ");
    scanf("%d", &n);
    
    int sum = 0;
    
    for (int i = 1; i <= n ; i++) {
        
        int x = 0;
        printf("Enter Number (%d): ", i);
        scanf("%d", &x);
        
        sum = sum + x;
    }
    
    float av = ((float)sum / n);
    
    printf("The sum of these integers is: %d\n", sum);
    printf("The average of these integers is: %.2f", av);
    
    return 0;
}
