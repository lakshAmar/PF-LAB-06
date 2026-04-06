#include <stdio.h>

int main() {
    int marks[6] = {45, 60, 35, 50, 28, 55};
    int *ptr = marks;
    int i, max;

    max = *(ptr + 0);

    printf("Before scaling:\n");
    for (i = 0; i < 6; i++)
        printf("Student %d: %d\n", i + 1, *(ptr + i));

    for (i = 0; i < 6; i++) {
        if (*(ptr + i) > max)
            max = *(ptr + i);
    }
    printf("\nMax mark: %d\n", max);

    for (i = 0; i < 6; i++)
        *(ptr + i) = (int)(((float)*(ptr + i) / max) * 100);

    printf("\nAfter scaling:\n");
    for (i = 0; i < 6; i++)
        printf("Student %d: %d\n", i + 1, *(ptr + i));

    return 0;
}
