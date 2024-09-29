#include <stdio.h>
#include <stdlib.h>

int main() {
    int number, *grades, highest, lowest;
    printf("Enter the number of students: ");
    scanf("%d", &number);
    grades = (int *)malloc(number * sizeof(int));
    if (grades == NULL) {
        printf("Memory allocation: FAIL\n");
        return 1;
    }
    printf("Enter the grades: ");
    for (int i = 0; i < number; i++) {
        scanf("%d", &grades[i]);
    }
    highest = lowest = grades[0];
    for (int i = 1; i < number; i++) {
        if (grades[i] > highest) highest = grades[i];
        if (grades[i] < lowest) lowest = grades[i];
    }
    printf("Highest grade: %d\n", highest);
    printf("Lowest grade: %d\n", lowest);
    free(grades);
    return 0;
}
