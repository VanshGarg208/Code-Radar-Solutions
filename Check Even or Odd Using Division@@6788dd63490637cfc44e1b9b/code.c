#include <stdio.h>
int main() {
    int  n;
    scnaf("%d", &n);

    if (n % 2 == 0) {
        printf("Even");
    }

    else {
        printf("Odd");
    }

    return 0;
}