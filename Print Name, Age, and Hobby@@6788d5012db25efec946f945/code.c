#include <stdio.h>

int main() {
    char name, hobby;
    int age;

    scanf("%d %d %d", &name, &age, &hobby);
    printf("Name: %c\n", name);
    printf("Age: %d\n", age);
    printf("Hobby: %c\n", hobby);

    return 0;
}