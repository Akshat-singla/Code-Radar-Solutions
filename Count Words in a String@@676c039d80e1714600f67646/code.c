// Your code here...
#include <stdio.h>
#include <string.h>

int countWords(char str[]) {
    int count = 0;
    int inWord = 0;
    
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            inWord = 0;
        } else if (inWord == 0) {
            inWord = 1;
            count++;
        }
    }
    return count;
}

int main() {
    char str[200];
    fgets(str, sizeof(str), stdin);
    printf("%d\n", countWords(str));
    return 0;
}