#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
typedef struct node node;

node *top;

void initialize()
{
    top = NULL;
}

void push()
{
    node *tmp = (node *)malloc(sizeof(node));
    int value;
    if (tmp == NULL)
    {
        printf("Unable to push value");
    }
    else
    {
        printf("Enter value you want to push: ");
        scanf("%d", &value);
        if (top == NULL)
        {
            tmp->data = value;
            tmp->next = NULL;
            top = tmp;
        }
        else
        {
            tmp->data = value;
            tmp->next = top;
            top = tmp;
        }
        printf("Value pushed successfully!\n");
    }
}

int pop()
{
    if (top == NULL)
    {
        printf("Stack underflow\n");
    }
    else
    {
        node *tmp;
        int n = top->data;
        tmp = top;
        top = top->next;
        free(tmp);
        printf("Value poped: %d\n", n);
    }
}

int peek()
{
    if (top == NULL)
        printf("Stack empty\n");
    else
        printf("%d", top->data);
}

void display()
{
    if (top == NULL)
        printf("NULL\n");
    else
    {
        node *tmp = top;
        printf("Stack -> ");
        while (tmp != NULL)
        {
            printf("%d ", tmp->data);
            tmp = tmp->next;
        }
    }
}

int main(void)
{
    int option;
    do
    {
        printf("\nMenu:\n      1.Push\n      2.Pop\n      3.Peek\n      4.Display\n      5.Exit\n");
        printf("Enter your options: ");
        scanf("%d", &option);

        switch (option)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            peek();
            break;
        case 4:
            display();
            break;
        case 5:
            printf("Thank you for using this program!");
            return 0;
        default:
            printf("Enter correct value");
        }
    } while (1);
}