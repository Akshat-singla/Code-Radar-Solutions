// Your code here...
#include <stdio.h>

void printReverseAlphabetTriangle(int N) {
    for (int i = N; i >= 1; i--) {
        char ch = 'A';
        for (int j = 1; j <= i; j++) {
            printf("%c ", ch);
            ch++;
        }
        printf("\n");
    }
}

int main() {
    int N;
    scanf("%d", &N);
    printReverseAlphabetTriangle(N);
    return 0;
}