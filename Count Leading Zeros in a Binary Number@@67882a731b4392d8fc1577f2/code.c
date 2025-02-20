#include <stdio.h>
int main() {
    int num, count = 0;
    scanf("%d", &num);

    if (num == 0) {
        return 0;
    }

    if ((num >> 16) == 0) { count += 16; num <<= 16; }
    if ((num >> 24) == 0) { count += 8; num <<= 8; }
    if ((num >> 28) == 0) { count += 4; num <<= 4; }
    if ((num >> 30) == 0) { count += 2; num <<= 2; }
    if ((num >> 31) == 0) { count += 1; }

    printf("%d\n", count);

    return 0;
}
