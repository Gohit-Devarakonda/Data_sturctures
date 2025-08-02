#include<stdio.h>
#include<stdlib.h>
int stack[10];
int X=-1;
void push()
{
	int i;
	if(X==9)
	{
		printf("the stack is overflowed\n");
	}
	else
	{
		printf("Enter a number to enter into the stack:-");
		scanf("%d",&i);
		X++;
		stack[X]=i;
	}
}
void pop()
{
	int a;
	if(X==-1)
	{
		printf("The stack is empty\n");
	}
	else
	{
		a=stack[X];
		X--;
		printf("The top most element in the stack is %d\n",a);
	}
}
void display()
{
	int i;
	for(i=0;i<X;i++)
	{
		printf("The %dth element of the stack is %d\n",i+1,stack[i]);
	}
}
void peek()
{
	if(X==-1)
	{
		printf("The stack is empty\n");
	}
	else
	{
		printf("The top most element in the stack is %d\n",stack[X]);
	}
}
int main()
{
	int n;
	do
	{
		printf("1.push\n2.pop\n3.peek\n4.display\n5.exit\n");
		printf("Enter any number from the above:-");
		scanf("%d",&n);
		switch (n)
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
			exit(0);
			break;
		default:
			break;
		}
	}while(n!=0);
	return 0;
}