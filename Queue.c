#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define SIZE 10

void enQueue();
void deQueue();
void display();

int front = -1, rear = -1;
int items[SIZE];

int main()
{
    bool repeat = true;
    do
    {
        int option;
        printf("\nMenu\n      1.Add item\n      2.Remove item\n      3.Display item\n      4.Exit\nEnter option:");
        scanf("%d", &option);

        switch (option)
        {
        case 1:
            enQueue();
            break;
        case 2:
            deQueue();
            break;
        case 3:
            display();
            break;
        case 4:
            repeat = false;
            printf("\nThank for using this program!");
            break;

        default:
            printf("Enter correct option!");
            break;
        }
    } while (repeat);
}

void enQueue()
{
    if (rear == SIZE - 1)
        printf("Queue is full.");
    else
    {
        if (front == -1)
            front = 0;

        ++rear;
        printf("Enter value to be inserted: ");
        scanf("%d", &items[rear]);
        printf("value inserted -> %d\n", items[rear]);
    }
    return;
}

void deQueue()
{
    if (front == -1)
        printf("Queue is empty.");

    else
    {
        printf("Removed -> %d\n", items[front]);
        items[front] = NULL;
        ++front;
        if (front > rear)
            front = rear = -1;
    }
    return;
}

void display()
{
    if (rear == -1)
        printf("\n Queue is empty.");
    else
    {
        printf("\nQueue elements are -> ");
        for (int i = front; i <= rear; ++i)
        {
            printf("%d ", items[i]);
        }
        printf("\n");
    }
}
