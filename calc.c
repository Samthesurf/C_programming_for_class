#include <stdio.h>
#include <string.h>

int main(void) {
    float a, b;
    char operation[3];
    printf("What is a?\t");
    scanf("%f", &a);
    printf("\nWhat is b?\t");
    scanf("%f", &b);
    printf("\nWhat is the operator?\t");
    scanf("%s", operation);

    if (strcmp(operation, "+") == 0) {
        printf("%.2f + %.2f = %.2f", a, b, a + b);
    } 
    else if (strcmp(operation, "-") == 0) {
        printf("%.2f - %.2f = %.2f", a, b, a - b);
    } else if (strcmp(operation, "*") == 0) {
        printf("%.2f * %.2f = %.2f", a, b, a * b);
    } else if (strcmp(operation, "/") == 0) {
        printf("%.2f / %.2f = %.2f", a, b, a / b);
    }
    return 0;
}