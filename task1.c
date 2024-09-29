#include <stdio.h>
#include <stdlib.h>

int main() {
    int number;
    int *arrayOfNumbers;
    int sumOfArray = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &number);
    arrayOfNumbers = (int *)malloc(number * sizeof(int));
    if (arrayOfNumbers == NULL) {
        printf("Memory allocation: FAIL\n");
        return 1;
    }
    printf("Enter %d integers: ", number);
    for (int i = 0; i < number; i++) {
        scanf("%d", &arrayOfNumbers[i]);
        sumOfArray += arrayOfNumbers[i];
    }
    printf("Sum of the array: %d\n", sumOfArray);
    free(arrayOfNumbers);
    return 0;
}
