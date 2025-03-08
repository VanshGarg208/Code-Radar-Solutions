#include <stdio.h>

int isPrime(int num) {
    if (num < 2) {
        return 0;
    }

    for (int i = 2; i*i <= num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }

    return 1;
}

int main() {

    int t;
    scanf("%d", &t);

    int num;
    while (t--) {
        scanf("%d", &num);
        printf("%d\n", isPrime(num));
    }

    return 0;
}