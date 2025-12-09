#include <stdio.h>
#include <string.h>
int main () {
    char string[100], temp;
    int n, i, j;
    printf("Enter string: ");
    scanf("%s", string);
    n = strlen(string);
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (string[i] > string[j]) {
                temp = string[i];
                string[i] = string[j];
                string[j] = temp;
            }
        }
    }
    printf("Sorted: %s", string);
    return 0;
}