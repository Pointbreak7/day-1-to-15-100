//Write a program to implement a basic calculator using switch-case for +, -, *, /, %
#include <stdio.h>

int main() {
    int a, b, result;
    char op;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter an operator (+, -, *, /, %%): ");
    scanf(" %c", &op);

    printf("Enter second number: ");
    scanf("%d", &b);

    switch (op) {
        case '+': 
            result = a + b;
            printf("Result = %d\n", result);
            break;
        case '-': 
            result = a - b;
            printf("Result = %d\n", result);
            break;
        case '*': 
            result = a * b;
            printf("Result = %d\n", result);
            break;
        case '/': 
            if (b != 0)
                printf("Result = %d\n", a / b);
            else
                printf("Error! Division by zero.\n");
            break;
        case '%': 
            if (b != 0)
                printf("Result = %d\n", a % b);
            else
                printf("Error! Modulus by zero.\n");
            break;
        default: 
            printf("Invalid operator!\n");
    }

    return 0;
}


//Write a program to print numbers from 1 to n.
#include <stdio.h>

int main() {
    int n, i;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}
