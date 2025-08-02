#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head,*newnode,*temp;
void create()
{
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter a number:-");
    scanf("%d",&newnode->data);
    if(head==NULL)
    {
        head=newnode;
        temp=newnode;
    }
    else
    {
        temp->next=newnode;
        temp=newnode;
    }
    newnode->next=head;
}
void display
{
    temp=head;
    do
    {
        printf("%d\t",temp->data);
        temp=temp->next;
    }while(temp!=head);
}