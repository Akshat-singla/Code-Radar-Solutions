#include <stdio.h>

void printBinary(unsigned int n) {
    for (int i = 31; i >= 0; i--) {
        printf("%d", (n >> i) & 1);
    }
    printf("\n");
}

int main() {
    unsigned int num;
   
    printf("");
    scanf("%u", &num);

    printf("");
    printBinary(num);

    unsigned int flippedNum = ~num;

    printf("Flipped binary:    ");
    printBinary(flippedNum);

    return 0;
}
