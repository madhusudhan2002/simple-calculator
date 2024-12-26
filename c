#include <stdio.h>
void add(int a, int b) {
    printf("Sum of two numbers is %d\n", a + b);
}
void diff(int a, int b) {
    printf("Difference between the two numbers is %d\n", a - b);
}
void mul(int a, int b) {
    printf("Product of two numbers is %d\n", a * b);
}
void divide(int a, int b) {
    if (b != 0) {
        printf("Division of two numbers is %d\n", a / b);
    } else {
        printf("Error: Division by zero is not allowed.\n");
    }
}
void main() {
    while (1) {
        char op;
        int a, b;
        printf("Enter the operator (+, -, *, /) or 'q' to quit: ");
        scanf(" %c", &op);
        if (op == 'q') {
            printf("Exiting the program. Goodbye!\n");
            break;
        }

        printf("Enter the a value: ");
        scanf("%d", &a);

        printf("Enter the b value: ");
        scanf("%d", &b);

        if (op == '+') {
            add(a, b);
        } else if (op == '-') {
            diff(a, b);
        } else if (op == '*') {
            mul(a, b);
        } else if (op == '/') {
            divide(a, b);
        } else {
            printf("Invalid operator. Please try again.\n");
        }
    }
}
