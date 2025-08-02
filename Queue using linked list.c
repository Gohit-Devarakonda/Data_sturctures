#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *newnode,*front=NULL,*rear=NULL,*temp=NULL;
void enqueue()
{
    int x;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter a number:-");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    if(front==NULL)
    {
        front=newnode;
        rear=newnode;
    }
    else
    {
        rear->next=newnode;
        rear=newnode;
    }
}
void dequeue()
{
    printf("The element removed is %d",front->data);
    temp=front;
    front=front->next;
    free(temp);
}
void display()
{
    temp=front;
    printf("The elements in the Queue are\n\n");
    while(temp!=0)
    {
        printf("\t%d\n",temp->data);
        temp=temp->next;
    }
}
int main()
{
    int n;
    while(1)
    {
        printf("\n1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n");
        printf("Enter an option from above:-");
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
    }
}