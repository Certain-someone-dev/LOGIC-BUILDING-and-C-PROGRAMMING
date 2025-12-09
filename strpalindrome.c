#include <stdio.h>
#include <string.h>
int main() {
    char str[20];
    int i, len, flag = 0;
    printf("Enter a string: ");
    scanf("%s", str);
    len = strlen(str);
    for (i = 0; i < len; i++) {
        if (str[i] != str[len - i - 1]) {
            flag = 1; 
            break;
        }
    }
    if (flag) {
        printf("Not Palindrome");
    } else {
        printf("Palindrome");
    }
    return 0;
}