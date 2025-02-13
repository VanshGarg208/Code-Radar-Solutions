#include <stdio.h>
int main(){
    char n;
    scanf("%d", &n);

    if (n >= "A" && n <= "Z") {
        printf("Uppercase");
    }

    else if (n >= "a" && n <= "z") {
        printf("Lowercase");
    }

    return 0;
}