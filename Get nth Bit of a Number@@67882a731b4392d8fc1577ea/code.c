#include <stdio.h>

int main() {
    int n, num, bit;
    scanf("%d %d", &num, &n);

    bit = (num >> n & 1);

    printf("%d", bit);

    return 0;
}