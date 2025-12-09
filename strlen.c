#include <stdio.h>
int main() {
    char s[100];
    int i;
    printf("Enter string: ");
    scanf("%s", s);
    for (i = 0; s[i] != '\0'; ++i) {
        // Empty body loop
    }
    printf("Length: %d", i);
    return 0;
}
