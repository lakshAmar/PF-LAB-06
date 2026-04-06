#include <stdio.h>

int main() {
    int att[4][5] = {
        {1, 1, 0, 1, 1},
        {0, 0, 1, 0, 0},
        {1, 1, 1, 1, 0},
        {1, 0, 0, 0, 1}
    };
    int (*ptr)[5] = att;
    int i, j, sum;

    printf("--- Attendance Report ---\n\n");

    for (i = 0; i < 4; i++) {
        sum = 0;
        printf("Student %d: ", i + 1);
        for (j = 0; j < 5; j++) {
            printf("%d ", (*(ptr + i))[j]);
            sum += (*(ptr + i))[j];
        }
        printf("  Total: %d", sum);
        if (sum < 3)
            printf(" [At risk]");
        printf("\n");
    }

    return 0;
}
