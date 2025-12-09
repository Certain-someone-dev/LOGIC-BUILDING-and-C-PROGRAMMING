#include <stdio.h>
int main() {
    int arr[] = {1, 3, 5, 7, 9, 11}; 
    int n = 6, key, low = 0, high = n - 1, mid;
    printf("Enter key: ");
    scanf("%d", &key);
    while (low <= high) {
        mid = (low + high) / 2;
        if (arr[mid] == key) {
            printf("Found at index %d", mid);
            return 0;
        }
        if (arr[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    printf("Not Found");
    return 0;
}