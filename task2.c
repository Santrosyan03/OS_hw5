#include <stdio.h>
#include <stdlib.h>

int main() {
    int number;
    int *arrayOfNumbers;
    float sumOfArray = 0.0;
    printf("Enter the number of elements: ");
    scanf("%d", &number);
    arrayOfNumbers = (int *)calloc(number, sizeof(int));
    if (arrayOfNumbers == NULL) {
        printf("Memory allocation: FAIL\n");
        return 1;
    }
    printf("Array after calloc: ");
    for (int i = 0; i < number; i++) {
        printf("%d ", arrayOfNumbers[i]);
    }
    printf("\nEnter %d integers: ", number);
    for (int i = 0; i < number; i++) {
        scanf("%d", &arrayOfNumbers[i]);
        sumOfArray += arrayOfNumbers[i];
    }
    printf("Updated array: ");
    for (int i = 0; i < number; i++) {
        printf("%d ", arrayOfNumbers[i]);
    }
    printf("\nAverage of the array: %.3f\n", sumOfArray / number);
    free(arrayOfNumbers);
    return 0;
}
