#include <stdio.h>

float add(float num1, float num2) {
    return num1 + num2;
}

float subtract(float num1, float num2) {
    return num1 - num2;
}

float multiply(float num1, float num2) {
    return num1 * num2;
}

float divide(float num1, float num2) {
    return num1 / num2;
}

int main() {
    char operator;
    float num1, num2, result;

    while (1) {  // Infinite loop
        printf("Enter an operator (+, -, *, /): ");
        scanf("%c", &operator);

        if (operator == 'q' || operator == 'Q') {
            break;
        }

        printf("Enter two numbers: ");
        scanf("%f %f", &num1, &num2);

        switch (operator) {
            case '+':
                result = add(num1, num2);
                printf("%.2f + %.2f = %.2f\n", num1, num2, result);
                break;
            case '-':
                result = subtract(num1, num2);
                printf("%.2f - %.2f = %.2f\n", num1, num2, result);
                break;
            case '*':
                result = multiply(num1, num2);
                printf("%.2f * %.2f = %.2f\n", num1, num2, result);
                break;
            case '/':
                result = divide(num1, num2);
                printf("%.2f / %.2f = %.2f\n", num1, num2, result);
                break;
            default:
                printf("Invalid operator.\n");
        }

        while (getchar() != '\n') {}
    }

    return 0;
}

