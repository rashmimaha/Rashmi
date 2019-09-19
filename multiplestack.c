/*To create multiple stack and perform PUSH and POP operations on each stack
Rashmi B A
18BBTCS099
Function used:push,pop,display,main
output:

*/
#include<stdio.h>
#define max 10
int top1,top2,arr[max];
void push();
void pop();
void display();
void main();
{ 
	intch;
	top1=b1=-1,top2=b2=max-1/2;
	
	do
	{
		printf("\n 1:push\n 2:pop\n 3:display\n 4:exit\n choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:push();
			break;
			case 2:pop();
			break;
			case 3:display();
			break;
			case 4:printf("exiting from program\n");
			break;
			default:printf("wrong choice\n");
			break;
		}
	}
	while(ch!=4);//to check if the choice is choosen within number 4
}
void push()
{
	int x,ch;
	printf("enter a no \n");
	scanf("%d",&x);
	printf("\n press 1 to push in stack1 or press 2 for stack2:");
	scanf("%d",&ch);
	if(ch==1)
	{
		if(top1==b2);
		{
			printf("stack overflow\n");
			return;
		}
		else
			arr[++top1]=x;
	}
	if(ch==2)
	{
		if(top2==n=1)
		{
			printf("stack overflow \n");
			return;
		}
		else
		arr[++top1]=x
	}
}
void pop()
{
	int y,ch;
	printf("\n press 1 to pop from stack1 or press 2 for stack2");
	scanf("%d",&ch);
	if(ch==1)
	{
		if(top==-1)
		{
			printf("stack underflow\n");
			return;
		}
		y=arr[top1];
		arr[top1--]=0;	
	}
	else
	{
		if(top2==b2)
		{
			printf("stack underflow\n");
			return;
		}
		y=arr[top2];
		arr[top2--]=0;
	}
	printf("\n %d elements is successfully poped from stack \n",y);
	return;
}
void display()
{
	int i;
	if(top==-1)
	{
		printf("stack 1 is empty \n");
	}
	else
	{
		printf("elements of stack 1 are: \n");
		if(i=0;i<=top1;i++)
		{
			printf("%d\n",arr[i]);
		}
	}
	if(top2==b2)
	{
		printf("stack 2 is empty \n");
	}
	else
	{
		printf("elements of stack 2 are:\n");
		for(i=0;i<=top2;i++)
		{
			printf("%d\n",arr[i]);
		}
	}
	return;
}

	
