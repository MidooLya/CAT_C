#include <stdio.h>

void print(int n) {
    int current = 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", current);
            current++;
        }
        printf("\n");
    }
}

int main() {
    int n;
    scanf("%d", &n);
    print(n);
    
    return 0;
}
