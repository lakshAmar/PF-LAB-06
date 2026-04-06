#include <stdio.h>

float triageScore(int sev, int age, int vit) {
    float result = (sev * 0.5) + (age * 0.3) + (vit * 0.2);
    return result;
}

int main() {
    int sev, age, vit;
    float sc;

    printf("Enter severity (1-10): ");
    scanf("%d", &sev);
    printf("Enter age risk (1-10): ");
    scanf("%d", &age);
    printf("Enter vitals (1-10): ");
    scanf("%d", &vit);

    sc = triageScore(sev, age, vit);
    printf("Score: %.2f\n", sc);

    if (sc > 7.0)
        printf("Immediate attention required\n");
    else if (sc >= 4.0 && sc <= 7.0)
        printf("Moderate priority\n");
    else
        printf("Can wait\n");

    return 0;
}
