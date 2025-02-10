#include <stdio.h>

void printBinary(unsigned int n) {
    for (int i = 31; i >= 0; i--) {
        printf("%d", (n >> i) & 1);
    }
    printf("\n");
}

int main() {
    unsigned int num;
    scanf("%u", &num);

    printBinary(num);

    unsigned int flippedNum = ~num;

    printBinary(flippedNum);

    return 0;
}
