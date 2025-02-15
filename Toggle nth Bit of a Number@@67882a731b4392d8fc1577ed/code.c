#include <stdio.h>
int main() {

    int num, n, result;

    scanf("%d %d", &num, &n);

    result = num ^ (n << 1);

    printf("%d", result);

    return 0;
}