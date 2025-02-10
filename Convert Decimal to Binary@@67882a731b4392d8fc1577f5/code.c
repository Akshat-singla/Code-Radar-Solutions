#include <stdio.h>

void decimalToBinary(int n) {
    int binary[32]; 
    int index = 0;

    if (n == 0) { 
        printf("0\n");
        return;
    }

    while (n > 0) {
        binary[index++] = n & 1; 
        n = n >> 1; 
    }

    for (int i = index - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }
    printf("\n");
}

int main() {
    int num;

    scanf("%d", &num);

    decimalToBinary(num);

    return 0;
}
