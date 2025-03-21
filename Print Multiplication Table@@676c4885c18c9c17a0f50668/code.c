// Your code here...
#include <stdio.h>

void printMultiplicationTable(int N) {
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", N, i, N * i);
    }
}

int main() {
    int N;
    scanf("%d", &N);
    printMultiplicationTable(N);
    return 0;
}