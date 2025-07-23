#include <stdio.h>

int main() {
    char operator;
    double num1, num2;

    printf("Select the process (+ - * /): ");
    scanf(" %c", &operator);

    printf("Enter the first number: ");
    scanf("%lf", &num1);

    printf("Enter the second number: ");
    scanf("%lf", &num2);

    switch(operator) {
        case '+':
            printf("Output: %.2lf\n", num1 + num2);
            break;
        case '-':
            printf("Output: %.2lf\n", num1 - num2);
            break;
        case '*':
            printf("Output: %.2lf\n", num1 * num2);
            break;
        case '/':
            if(num2 != 0)
                printf("Output: %.2lf\n", num1 / num2);
            else
                printf("Error: Cannot divide by zero\n");
            break;
        default:
            printf("Error: Invalid operation\n");
    }

    return 0;
}
