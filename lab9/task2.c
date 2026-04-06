#include <stdio.h>

float applyDiscount(float p, int t) {
    if (t == 1)
        return p - (p * 0.05);
    else if (t == 2)
        return p - (p * 0.10);
    else if (t == 3)
        return p - (p * 0.20);
    else if (t == 4)
        return p - (p * 0.30);
    else
        return p;
}

void printInvoice(float orig, float disc) {
    float del = 0;

    printf("\n===== INVOICE =====\n");
    printf("Original Price:  Rs. %.2f\n", orig);
    printf("Discount:        Rs. %.2f\n", orig - disc);

    if (disc < 2000) {
        del = 150;
        printf("Delivery Charge: Rs. %.2f\n", del);
    }
    else {
        printf("Delivery Charge: Rs. 0.00\n");
    }

    printf("Final Total:     Rs. %.2f\n", disc + del);
    printf("===================\n");
}

int main() {
    float p;
    int t;

    printf("Enter price: ");
    scanf("%f", &p);
    printf("Tier (1=Bronze, 2=Silver, 3=Gold, 4=Platinum): ");
    scanf("%d", &t);

    float disc = applyDiscount(p, t);
    printInvoice(p, disc);

    return 0;
}
