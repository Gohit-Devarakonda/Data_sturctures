#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head=NULL,*newnode,*temp;
void create()
{
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter your data in the node:-");
    scanf("%d",&newnode->data);
    newnode->next=0;
    if(head==0)
    {
        head=newnode;
        temp=newnode;
    }
    else
    {
        temp->next=newnode;
        temp=newnode;
    }
}
void display()
{
    temp=head;
    printf("The values in the linked list are\n\t");
    if (temp == 0) 
    {
        printf("The list is empty.\n");
        return;
    }
    while(temp!=0)
    {
        printf("%d\n\t",temp->data);
        temp=temp->next;
    }
}
void begining()
{
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter the data you want to add in the linked list:-");
    scanf("%d",&newnode->data);
    newnode->next=head;
    head=newnode;
}
void last()
{
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter the data you want to add in the linked list:-");
    scanf("%d",&newnode->data);
    newnode->next=0;
    temp=head;
    while(temp->next!=0)
    {
        temp=temp->next;
    }
    temp->next=newnode;
}
void position()
{
    int pos,count=0,i=1;
    if(head==0)
    {
        printf("No values in the linked list");
    }
    else
    {
        temp=head;
        while(temp->next!=0)
        {
            count++;
            temp=temp->next;
        }
    }
    count=count+1;
    printf("Enter the position you want to enter your data:-");
    scanf("%d",&pos);
    if(pos>count)
    {
        printf("Invalid position");
    }
    else 
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter the value to insert:-");
        scanf("%d",&newnode->data);
        temp=head;
        while(i<pos-1)
        {
            temp=temp->next;
            i++;
        }
            newnode->next=temp->next;
            temp->next=newnode;
    }
}
void delf()
{
    temp=head;
    head=head->next;
    free(temp);
}
void dell()
{
    struct node *prenode;
    temp=head;
    while(temp->next!=0)
    {
        prenode=temp;
        temp=temp->next;
    }
    prenode->next=0;
    free(temp);
}
void delp()
{
    struct node *nextnode=0;
    int i=1,pos;
    printf("Enter a postion to delete:-");
    scanf("%d",&pos);
    temp=head;
    while(i<pos-1)
    {
        temp=temp->next;
        i++;
    }
    nextnode=temp->next;
    temp->next=newnode->next;
    free(newnode);
}
void reverse()
{
    struct node *prevnode=0,*currnode,*nextnode;
    currnode=head;
    nextnode=head;
    while(nextnode!=0)
    {
        nextnode=currnode->next;
        currnode->next=prevnode;
        prevnode=currnode;
        currnode=nextnode;
    }
    head=prevnode;
}
int main()
{
    int x;
    do
    {
        printf("\n1. Create a node\n2. Insert a node at the begining\n3. Insert a node at last\n4. Insert the node at a given position\n5. Display\n6. Delete first node\n7. Delete last node\n8. Delete the node at given position\n9. Reverse the linked list\n10. Exit\n");
        printf("Enter your choice:-");
        scanf("%d",&x);
        switch (x)
        {
            case 1:
                create();
                break;
            case 2:
                begining();
                break;
            case 3:
                last();
                break;
            case 4:
                position();
                break;
            case 5:
                display();
                break;
            case 6:
                delf();
                break;
            case 7:
                dell();
                break;
            case 8:
                delp();
                break;
            case 9:
                reverse();
                break;
            case 10:
                exit(0);
                break;
            default:
                printf("Enter a valid number form above");
        }
    }while(x!=0);
    return 0;
}