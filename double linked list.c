#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *newnode,*head=NULL,*temp=NULL;
void create()
{
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter a number:-");
    scanf("%d",&newnode->data);
    newnode->next=0;
    if(head==0)
    {
        newnode->prev=0;
        head=newnode;
        temp=newnode;
    }
    else
    {
        temp->next=newnode;
        newnode->prev=temp;
        temp=newnode;
    }
}
void display()
{
    temp=head;
    printf("\nThe elements in the linked list are\n");
    while(temp!=0)
    {
        printf("\t%d\n",temp->data);
        temp=temp->next;
    }
}
void ib()
{
    temp=head;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter a number:-");
    scanf("%d",&newnode->data);
    newnode->prev=0;
    head->prev=newnode;
    newnode->next=head;
    head=newnode;
}
void ie()
{
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter a number:-");
    scanf("%d",&newnode->data);
    newnode->next=0;
    while(temp->next!=0)
    {
        temp=temp->next;
    }
    temp->next=newnode;
    newnode->prev=temp;
}
void im()
{
    struct node *temp2;
    int pos,i=1,count=0,j=1;
    while(temp->next!=0)
    {
        count++;
        temp=temp->next;
    }   
    count++;
    printf("Enter the position:-");
    scanf("%d",&pos);
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter the value to insert:-");
    scanf("%d",&newnode->data);
    temp=head;
    while(i<pos-1)
    {
        temp=temp->next;
        i++;
    }
    while(j<=pos-1)
    {
        temp2=temp2->next;
        j++;
    }
    temp->next=newnode;
    newnode->prev=temp;
    temp2->prev=newnode;
    newnode->next=temp2->prev;
}
int main()
{
    int n;
    while(1)
    {
        printf("1.Create\n2.Insert at begining\n3.Inset at a particular position\n4.insert at end\n5.Display\n6.Exit\n");
        printf("Enter any from above:-");
        scanf("%d",&n);
        switch (n)
        {
            case 1:
                create();
                break;
            case 2:
                ib();
                break;
            case 3:
                im();
                break;
            case 4:
                ie();
                break;
            case 5:
                display();
                break;
            case 6:
                exit(0);
                break;
            default:
                printf("Enter correct option");
                break;
        }
    }
}