#include <stdio.h>

int totalRuns(int runs[], int size) {
    int s = 0, i;
    for (i = 0; i < size; i++)
        s += runs[i];
    return s;
}

int highestScore(int runs[], int size) {
    int mx = runs[0], i;
    for (i = 1; i < size; i++) {
        if (runs[i] > mx)
            mx = runs[i];
    }
    return mx;
}

int aboveAverage(int runs[], int size, float av) {
    int cnt = 0, i;
    for (i = 0; i < size; i++) {
        if (runs[i] > av)
            cnt++;
    }
    return cnt;
}

int main() {
    int runs[10], i;
    int tot, high, abv;
    float av;

    printf("Enter runs for 10 matches:\n");
    for (i = 0; i < 10; i++) {
        printf("Match %d: ", i + 1);
        scanf("%d", &runs[i]);
    }

    tot = totalRuns(runs, 10);
    av = (float)tot / 10;
    high = highestScore(runs, 10);
    abv = aboveAverage(runs, 10, av);

    printf("\n--- Performance Report ---\n");
    printf("Total: %d\n", tot);
    printf("Average: %.2f\n", av);
    printf("Highest: %d\n", high);
    printf("Above Average: %d\n", abv);

    return 0;
}
