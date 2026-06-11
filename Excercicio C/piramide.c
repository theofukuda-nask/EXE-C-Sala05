#include <stdio.h>

int main() {
    int i, j, k;
    int altura = 5;

    for (i = 1; i <= altura; i++) {
        for (j = 1; j <= altura - i; j++) {
            printf(" ");
        }
        for (k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
