#include <stdio.h>
#include <ctype.h>  // For isalpha() and isdigit() functions
#include <stdlib.h> // For exit()

#define MAX 100  // Maximum size of the stack

// Stack structure
char stack[MAX];
int top = -1;

// Function to push an element to the stack
void push(char c) {
    if (top == MAX - 1) {
        printf("Stack Overflow\n");
        exit(1);
    }
    stack[++top] = c;
}

// Function to pop an element from the stack
char pop() {
    if (top == -1) {
        printf("Stack Underflow\n");
        exit(1);
    }
    return stack[top--];
}

// Function to get precedence of an operator
int precedence(char op) {
    switch (op) {
        case '+':
        case '-':
            return 1;
        case '*':
        case '/':
            return 2;
        case '^':
            return 3;
        default:
            return 0;
    }
}

// Function to check if the given character is an operator
int isOperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/' || c == '^');
}

// Function to convert infix expression to postfix
void infixToPostfix(char infix[], char postfix[]) {
    int i = 0, j = 0;
    char ch, temp;

    while ((ch = infix[i++]) != '\0') {
        // If the character is an operand (variable or number), add it to the output
        if (isalnum(ch)) {
            postfix[j++] = ch;
        }
        // If the character is '(', push it to the stack
        else if (ch == '(') {
            push(ch);
        }
        // If the character is ')', pop until '(' is found
        else if (ch == ')') {
            while ((temp = pop()) != '(') {
                postfix[j++] = temp;
            }
        }
        // If the character is an operator
        else if (isOperator(ch)) {
            while (top != -1 && precedence(stack[top]) >= precedence(ch)) {
                postfix[j++] = pop();
            }
            push(ch);
        }
    }

    // Pop all remaining operators from the stack
    while (top != -1) {
        postfix[j++] = pop();
    }

    // Null terminate the postfix expression
    postfix[j] = '\0';
}

int main() {
    char infix[MAX], postfix[MAX];

    printf("Enter an infix expression: ");
    scanf("%s", infix);

    // Convert infix to postfix
    infixToPostfix(infix, postfix);

    // Print the postfix expression
    printf("Postfix expression: %s\n", postfix);

    return 0;
}
