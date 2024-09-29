#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char **arrayOfNumbers = (char **)malloc(3 * sizeof(char *));
    int i;
    for (i = 0; i < 3; i++) {
        arrayOfNumbers[i] = (char *)malloc(50 * sizeof(char));
    }
    printf("Enter 3 strings: ");
    for (i = 0; i < 3; i++) {
        scanf("%s", arrayOfNumbers[i]);
    }
    arrayOfNumbers = (char **)realloc(arrayOfNumbers, 5 * sizeof(char *));
    for (i = 3; i < 5; i++) {
        arrayOfNumbers[i] = (char *)malloc(50 * sizeof(char));
    }
    printf("Enter 2 more strings: ");
    for (i = 3; i < 5; i++) {
        scanf("%s", arrayOfNumbers[i]);
    }
    printf("All strings: ");
    for (i = 0; i < 5; i++) {
        printf("%s ", arrayOfNumbers[i]);
    }
    printf("\n");
    for (i = 0; i < 5; i++) {
        free(arrayOfNumbers[i]);
    }
    free(arrayOfNumbers);
    return 0;
}
