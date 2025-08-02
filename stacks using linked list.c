#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *top=NULL,*newnode,*temp;
void push()
{
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter a value:-");
    scanf("%d",&newnode->data);
    newnode->next=top;
    top=newnode;
}
void display()
{
    temp=top;
    if(top==NULL)
    {
        printf("Stack is empty");
    }
    while(temp!=0)
    {
        printf("%d\n\t",temp->data);
        temp=temp->next;
    }
}
void pop()
{
    temp=top;
    top=newnode->next;
    printf("%d",newnode->data);
    free(temp);
}
void peek()
{
    printf("%d",top->data);
}
int main()
{
    int n;
    do
    {
        printf("1.push\n2.display\n3.pop\n4.peek\n5.exit\n");
        printf("Enter a value from above:-");
        scanf("%d",&n);
        switch(n)
        {
            case 1:
                push();
                break;
            case 2:
                display();
                break;
            case 3:
                pop();
                break;
            case 4:
                peek();
                break;
            case 5:
                exit;
                break;
        }
    } while (n!=0);
    
}
