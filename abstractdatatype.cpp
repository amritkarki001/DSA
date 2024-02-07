#include <stdio.h>

#define SIZE 5 // stack size

void push(int);
int pop();
void list();
int isempty();
int isfull();

int stack[SIZE];
int top = -1; // Initialize top to -1

int main()
{
    char choice;
    int k, res;

    do
    {
        printf("\n Stack based on array!\n");
        printf("\n ----------------------\n");
        printf("1.PUSH\t\t\n");
        printf("2.POP\t\t\n");
        printf("3.LIST\t\t\n");
        printf("4.EXIT\t\t\n");

        printf("\n\nWhich operation?");
        scanf(" %c", &choice);

        switch (choice)
        {
        case '1':
            printf("\nEnter a data number:\n");
            scanf("%d", &k);
            push(k);
            break;
        case '2':
            res = pop();
            if (res == -1)
            {
                printf("\n\nStack is Empty!");
            }
            else
            {
                printf("\n\n%d is popped from stack\n\n", res);   
            }
            break;
        case '3':
            list();
            break;
        case '4':
            printf("\n\nThank You! BYE BYE!\n\n");
            break;
        }

    } while (choice != '4');

    return 0;
}

void push(int k)
{
    if (isfull())
    {
        printf("\n\nSORRY!! Stack is Full\n\n");
        return;
    }

    stack[++top] = k; // Increment top before assigning value
}


int pop()
{
    if (isempty())
    {
        printf("\n\nStack is Empty!");
        return -1; // Return -1 to indicate an empty stack
    }

    return stack[top--]; // Return top element and then decrement top
}

void list()
{
    int i;

    printf("\n\nStack Contents:\n\n");

    for (i = 0; i <= top; i++)
    {
        printf("%d\n", stack[i]);
    }
}

int isempty()
{
    return (top == -1);
}

int isfull()
{
    return (top == SIZE - 1);
}
