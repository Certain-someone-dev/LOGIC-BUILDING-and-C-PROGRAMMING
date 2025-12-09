#include <stdio.h>
int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = 5, key, i, found = 0;
    printf("Enter number to search: ");
    scanf("%d", &key);
    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            printf("Found at index %d", i);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Not found");
    }
    return 0;
}