#include <stdio.h>

int main() {
    int N;
    
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {  // Loop for rows
        // Print spaces for right alignment
        for (int j = 1; j <= N - i; j++) {
            printf(" ");
        }
        // Print stars
        for (int k = 1; k <= i; k++) {
            printf("*");
        }
        printf("\n");  // Move to the next line after each row
    }

    return 0;
}
