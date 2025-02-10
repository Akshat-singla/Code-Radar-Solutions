#include <stdio.h>

int countTrailingZeros(int n) {
    if (n == 0) return 32; 
    int count = 0;
    while ((n & 1) == 0) { 
        count++;
        n >>= 1; 
    }
    return count;
}

int main() {
    int num;
    
    scanf("%d", &num);
    
    int result = countTrailingZeros(num);
    printf("%d\n", result);
    
    return 0;
}
