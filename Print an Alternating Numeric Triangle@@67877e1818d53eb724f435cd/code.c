// Your code here...
#include <stdio.h>

void printAlternatingTriangle(int N) {
    for (int i = 1; i <= N; i++) {
        int num = (i % 2 == 1) ? 1 : 0; // Start with 1 for odd rows, 0 for even rows
        for (int j = 1; j <= i; j++) {
            printf("%d ", num);
        }
        printf("\n");
    }
}

int main() {
    int N;
    scanf("%d", &N);
    printAlternatingTriangle(N);
    return 0;
}