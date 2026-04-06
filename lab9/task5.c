#include <stdio.h>

float toMJ(float kw) {
    return kw * 3.6;
}

float toBTU(float kw) {
    return kw * 3412.14;
}

float toCal(float kw) {
    return kw * 859845;
}

int main() {
    float kw;

    printf("Enter kWh reading: ");
    scanf("%f", &kw);

    printf("\n--- Conversion Report ---\n");
    printf("Input: %.2f kWh\n", kw);
    printf("MJ:    %.2f\n", toMJ(kw));
    printf("BTU:   %.2f\n", toBTU(kw));
    printf("Cal:   %.2f\n", toCal(kw));

    // function chaining
    printf("\nChaining demo: %.2f MJ\n", toMJ(kw));

    return 0;
}
