#include <stdio.h>

int main() {
	double x, y;
	printf("Введите две координаты x y через пробел\n");
    scanf("%lf %lf", &x, &y);

    if (x >= -1 && x <= 1 && y >= -1 && y <= 1 && y >= -x) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
