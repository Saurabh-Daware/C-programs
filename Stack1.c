#include <stdio.h>

#define MAXSIZE 50

struct stack
{
    int stk[MAXSIZE];
    int top;
};
typedef struct stack stack;
stack s;

void push(void);
int pop(void);
void display(void);

void main()
{
    int choice;
    int option = 1;
    s.top = -1;
    printf("STACK OPERATION\n");
    while (option)
    {
        printf("===========================================\n");
        printf("|      1    -->    PUSH                   |\n");
        printf("|      2    -->    POP                    |\n");
        printf("|      3    -->    DISPLAY                |\n");
        printf("|      4    -->    EXIT                   |\n");
        printf("===========================================\n");

        printf("Enter your choice\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            printf("Thank you!");
            return;
        }
        option = 1;
    }
}
/*  Function to add an element to the stack */
void push()
{
    int num;
    if (s.top == (MAXSIZE - 1))
    {
        printf("Stack is Full\n");
        return;
    }
    else
    {
        printf("Enter the element to be pushed\n");
        scanf("%d", &num);
        s.top = s.top + 1;
        s.stk[s.top] = num;
    }
    return;
}
/*  Function to delete an element from the stack */
int pop()
{
    int num;
    if (s.top == -1)
    {
        printf("Stack is Empty\n");
        return (s.top);
    }
    else
    {
        num = s.stk[s.top];
        printf("poped element is = %d\n", s.stk[s.top]);
        s.top = s.top - 1;
    }
    return (num);
}
/*  Function to display the status of the stack */
void display()
{
    int i;
    if (s.top == -1)
    {
        printf("Stack is empty\n");
        return;
    }
    else
    {
        printf("\n The status of the stack is \n");
        printf("Top --> [ ");
        for (i = s.top; i >= 0; i--)
        {
            printf("%d ", s.stk[i]);
        }
        printf("]");
    }
    printf("\n");
}