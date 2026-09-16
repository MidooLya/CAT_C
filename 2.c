#include <stdio.h>

int main() {
    long long n, e, cipher;
    printf("Введите n : ");
    scanf("%lld", &n);
    printf("Введите e: ");
    scanf("%lld", &e);
    printf("Введите cipher: ");
    scanf("%lld", &cipher);
    long long p = 2;
    while (n % p != 0) {
        p++;
    }
    long long q = n / p;
    long long phi = (p - 1) * (q - 1);

    long long d = 1;
    while ((d * e) % phi != 1) {
        d++;
    }

    long long message = 1;
    for (int i = 0; i < d; i++) {
        message = (message * cipher) % n;
    }

    printf("Секретный символ: '%c' (ASCII код: %lld)\n", (char)message, message);

    return 0;
}
