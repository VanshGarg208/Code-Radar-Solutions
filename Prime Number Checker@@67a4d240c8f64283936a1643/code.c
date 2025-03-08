#include <stdio.h>

int is_Prime(int num) {
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

    int t, num;
    scanf("%d", &num);

    while (t--) {
        scanf("%d", &num);
        printf("%d", is_Prime(num));
    }

    return 0;
}