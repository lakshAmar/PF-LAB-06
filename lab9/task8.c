#include <stdio.h>

int main() {
    void *ptr;

    int vib = 847;
    float temp = 73.6;
    char stat = 'W';

    ptr = &vib;
    printf("Vibration: %d vps\n", *(int *)ptr);
    printf("Addr: %p\n", (void *)ptr);

    ptr = &temp;
    printf("\nTemp: %.1f C\n", *(float *)ptr);
    printf("Addr: %p\n", (void *)ptr);

    ptr = &stat;
    printf("\nStatus: %c\n", *(char *)ptr);
    printf("Addr: %p\n", (void *)ptr);

    printf("\n--- Alert ---\n");
    if (*(char *)ptr == 'N')
        printf("Normal.\n");
    else if (*(char *)ptr == 'W')
        printf("Warning! Check sensors.\n");
    else if (*(char *)ptr == 'C')
        printf("CRITICAL! Take action now.\n");

    return 0;
}
