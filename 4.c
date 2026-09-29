#include <stdio.h>

int main() {
    int r = 5;
    int c = 5;

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (i == 0 || i == r - 1 || j == 0 || j == c - 1) {
                printf("*");
            } else {
                printf("_");
            }
        }
        printf("\n");
    }

    return 0;
}
