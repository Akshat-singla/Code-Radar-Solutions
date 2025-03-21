// Your code here...
#include <stdio.h>
#include <string.h>

void checkPalindrome(char str[]) {
    int length = strlen(str);
    int isPalindrome = 1;
    
    for (int i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            isPalindrome = 0;
            break;
        }
    }
    
    if (isPalindrome) {
        printf("Yes\n");
    } else {
        printf("No\n"); 
    }
}

int main() {
    char str[100];
    scanf("%s", str);
    checkPalindrome(str);
    return 0;
}