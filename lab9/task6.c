#include <stdio.h>

float totalRevenue(float b[], int n) {
    float s = 0;
    int i;
    for (i = 0; i < n; i++)
        s += b[i];
    return s;
}

int bestTable(float b[], int n) {
    int idx = 0, i;
    for (i = 1; i < n; i++) {
        if (b[i] > b[idx])
            idx = i;
    }
    return idx;
}

int isProfitable(float t) {
    if (t > 10000)
        return 1;
    return 0;
}

int main() {
    float b[5];
    int i;

    printf("Enter bills for 5 tables:\n");
    for (i = 0; i < 5; i++) {
        printf("Table %d: ", i + 1);
        scanf("%f", &b[i]);
    }

    float tot = totalRevenue(b, 5);
    int best = bestTable(b, 5);

    printf("\n--- Summary ---\n");
    printf("Total: Rs. %.2f\n", tot);
    printf("Best: Table %d (Rs. %.2f)\n", best + 1, b[best]);

    if (isProfitable(tot))
        printf("Profitable night!\n");
    else
        printf("Not profitable.\n");

    return 0;
}
