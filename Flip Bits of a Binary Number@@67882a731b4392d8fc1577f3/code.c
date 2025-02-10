#include <stdio.h>

int main() {
    int num;

    scanf("%d", &num);

    int flippedNum = ~num;

    printf("%d\n", flippedNum);

    return 0;
}
