#include <stdio.h>

int main() {
    int Min = 1;
    int Max;
    scanf("%d", &Max);

    for (int Z = Min; Z <= Max; Z++) {
        if (Z % 2 != 0) {
            printf("%d ", Z);
        }
    }

    printf("\n");

    for (int Z = Max; Z >= Min; Z--) {
        if (Z % 2 == 0) {
            printf("%d ", Z);
        }
    }

    printf("\n");
    return 0;
}