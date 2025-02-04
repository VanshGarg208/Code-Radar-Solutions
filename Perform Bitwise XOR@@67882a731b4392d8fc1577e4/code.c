#include <stdio.h>

int main() {
    int a, b, result;
    scnaf("%d %d", &a, &b);
    result = a ^ b;
    printf("%d", result);

    return 0;
}