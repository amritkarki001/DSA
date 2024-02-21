#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define SIZE 100

bool isOperand(char ch) {
    return (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z');
}

void push(char stack[][SIZE], int *top, char ch) {
    stack[++(*top)][0] = ch;
    stack[*top][1] = '\0';
}

void pop(char stack[][SIZE], int *top, char *operand) {
    strcpy(operand, stack[*top]);
    (*top)--;
}

char* postfixToInfix(char* postfix) {
    char stack[SIZE][SIZE];
    int top = -1;

    int len = strlen(postfix);
    for (int i = 0; i < len; i++) {
        if (isOperand(postfix[i])) {
            push(stack, &top, postfix[i]);
        } else {
            char operand1[SIZE], operand2[SIZE];
            pop(stack, &top, operand1);
            pop(stack, &top, operand2);
            sprintf(stack[++top], "(%c%c%c)", operand2[0], postfix[i], operand1[0]);
        }
    }
    return strdup(stack[top]);
}

int main() {
    char postfix[] = "abc/-ad/e-*";
    char* infix = postfixToInfix(postfix);
    printf("Postfix expression: %s\n", postfix);
    printf("Infix expression: %s\n", infix);
    free(infix);
    return 0;
}

