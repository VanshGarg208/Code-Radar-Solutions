#include <stdio.h>
int main(){
    char n;
    scanf("%d", &n);

    if ((n == 'a') && (n == 'e') && (n == 'i') && (n == 'o') && (n == 'u')) {
        printf("Vowel");
    }

    else {
        printf("Consonent");
    }

    return 0;
}