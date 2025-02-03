#include <stdio.h>

int main() {
    float r, area;

    scanf("%f", &r);

    area = 3.14159*r*r;

    printf("Area: %.2f", area);

    return 0;
}