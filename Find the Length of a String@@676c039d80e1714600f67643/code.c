// Your code here...
#include <stdio.h>

int stringLength(char str[]) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

int main() {
    char str[200];
    scanf("%s", str);
    printf("%d\n", stringLength(str));
    return 0;
}