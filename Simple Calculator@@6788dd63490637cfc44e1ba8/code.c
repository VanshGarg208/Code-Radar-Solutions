#include <stdio.h>
int main() {
    int a, b;
    char op;
    scanf("%d %d %c", &a, &b, &op);

    switch (op) {
        case '+': printf("%d", a+b); break;
        case '-': printf("%d", a-b); break;
        case '*': printf("%d", a*b); break;
        case '/':
            if (b == 0) {
                printf("Invalid"); break
            }

            else {
                printf("%d", a/b); break
            }
    }

    return 0;
}