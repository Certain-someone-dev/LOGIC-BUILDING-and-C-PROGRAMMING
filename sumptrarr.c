#include <stdio.h>
int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int sum = 0, *ptr;
    for (ptr = arr; ptr < arr + 5; ptr++) {
        sum += *ptr;
    }
    printf("Sum: %d", sum);
    return 0;
}
