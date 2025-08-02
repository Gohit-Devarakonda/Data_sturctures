#include<stdio.h>
#include<stdlib.h>
int queue[10];
int front=-1,rear=-1;
void enqueue()
{
    int x;
    printf("Enter the number to insert in the queue:-");
    scanf("%d",&x);
    if(rear==-1)
    {
    rear++;
    front++;
    queue[rear]=x;
    }
    else
    {
        if(rear==9)
        {
            printf("Queue is full\n");
        }
        else
        {
            rear++;
            queue[rear]=x;
        }
    }
}
void dequeue()
{
    printf("The removed element is %d",queue[front]);
    front++;
    
}
void display()
{
    printf("The elements in the queue are \n");
    for(int i=front;i<=rear;i++)
    {
        printf("\t%d\n",queue[i]);
    }
}
int main()
{
    int n;
    do
    {
        printf("\n1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n");
        printf("Enter any option from the above:-");
        scanf("%d",&n);
        switch (n)
        {
            case 1:
                enqueue();
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
                break;
            default:
                printf("Enter the correct option from the above");
                break;
        } 
    }while(n!=0);
      
}