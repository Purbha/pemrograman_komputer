#include <stdio.h>

int main() {
    int A, B, max;
    printf("PROGRAM NILAI TERBESAR 2 BILANGAN\n\n");
    printf("Input Bilangan 1: "); scanf("%i", &A);
    printf("Input Bilangan 2: "); scanf("%i", &B);
    if (A > B) {
        max = A;
    } else {
        max = B;
    }
    printf("\nBilangan terbesar = %i", max);
    return 0;
}
