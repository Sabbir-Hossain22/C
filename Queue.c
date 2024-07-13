#include<stdio.h>
#include<stdlib.h>
#define size 100
int a[10];
int rear= -1;
int front= -1;

void enqueue()
{
    int value;
    if(rear ==size-1)
        printf("Overflow\n");
    else
    {
        if(front==-1)
            front=0;
        printf("\nEnter Element to insert : ");
        scanf("%d", &value);
        rear=rear+1;
        a[rear]=value;
    }
}
void dequeue()
{
    if(front==-1 || front >rear)
    {
        printf("Underflow\n");
    }
    else
    {
        printf("Elenet deleted : %d\n",a[front]);
        front=front +1;
    }
}
void show()
{

    int i;
    if(front==-1)
        printf("Empty Queue\n");
    else
    {
        printf("Queue: \n");
        for(i=front; i<rear; i++)
            printf("%d",a[i]);
        printf("\n");
    }
}
int main()
{
    int ch;
    while(1)
    {
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Show\n");
        printf("4.Exit\n");
        printf("Enter Your Choice : ");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            show();
            break;
        case 4:
            exit(0);
        default:
            printf("Invalid choice.");

        }
    }
}
