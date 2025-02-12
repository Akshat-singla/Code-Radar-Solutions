#include <stdio.h>

void checkTriangleType(int a, int b, int c) {
    if (a == b && b == c) {
        printf("Equilateral\n"); 
    } else if (a == b || b == c || a == c) {
        printf("Isosceles\n"); 
    } else {
        printf("Scalene\n"); 
    }
}

int main() {
    int a, b, c;
    
    scanf("%d %d %d", &a, &b, &c);
    
    checkTriangleType(a, b, c);
    
    return 0;
}
