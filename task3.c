#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arrayOfNumbers = (int *)malloc(10 * sizeof(int));
    if (arrayOfNumbers == NULL) {
        printf("Memory allocation: FAIL\n");
        return 1;
    }
    printf("Enter 10 integers: ");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arrayOfNumbers[i]);
    }
    arrayOfNumbers = (int *)realloc(arrayOfNumbers, 5 * sizeof(int));
    if (arrayOfNumbers == NULL) {
        printf("Memory reallocation: FAIL\n");
        return 1;
    }
    printf("Array after resizing: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arrayOfNumbers[i]);
    }
    printf("\n");
    free(arrayOfNumbers);
    return 0;
}
