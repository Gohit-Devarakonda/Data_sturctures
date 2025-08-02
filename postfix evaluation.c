#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>

#define MAX 100

int stack[MAX];
int top = -1;

// Push operation
void push(int value) {
    if (top >= MAX - 1) 
    {
        printf("Stack Overflow\n");
        exit(1);
    }
    stack[++top] = value;
}

// Pop operation
int pop() {
    if (top < 0) {
        printf("Stack Underflow\n");
        exit(1);
    }
    return stack[top--];
}

// Function to evaluate postfix expression
int evaluatePostfix(char *exp) {
    int i;
    for (i = 0; exp[i] != '\0'; i++) {
        char ch = exp[i];

        if (isdigit(ch)) {
            // Convert char to int and push
            push(ch - '0');
        } else {
            // It's an operator, pop two values
            int val2 = pop();
            int val1 = pop();
            int result;

            switch (ch) {
                case '+': result = val1 + val2; break;
                case '-': result = val1 - val2; break;
                case '*': result = val1 * val2; break;
                case '/': result = val1 / val2; break;
                case '^': result = pow(val1, val2); break;
                default:
                    printf("Invalid Operator: %c\n", ch);
                    exit(1);
            }

            push(result);
        }
    }

    return pop(); // Final result
}

// Main Function
int main() {
    char postfix[MAX];

    printf("Enter a postfix expression (single-digit operands): ");
    scanf("%s", postfix);

    int result = evaluatePostfix(postfix);
    printf("Result of postfix expression: %d\n", result);

    return 0;
}