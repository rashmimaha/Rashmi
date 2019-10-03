/*To create a circular queue in an array and perform insertion and deletion
Rashmi B A
18BBTCS099
function used:main,
Output:
enter the number of elemnts:3
1.ADD 2.DELETE 3.DISPLAY 4.EXIT enter the choice:1
enter the element:3

insert->3
1.ADD 2.DELETE 3.DISPLAY 4.EXIT enter the choice:1
enter the element:4

insert->4
1.ADD 2.DELETE 3.DISPLAY 4.EXIT enter the choice:2

delete element ->3
enter the element in queue are:
4
1.ADD 2.DELETE 3.DISPLAY 4.EXIT enter the choice:
*/
#include<stdio.h>
int a[10];
void main()
{
  int n,i,item,ch;
  printf("enter the number of elements");
  scanf("%d",&n);
  int front=-1,rear=-1;
  do
    {
      printf("\n1.ADD 2.DELETE 3.DISPLAY 4.EXIT");
      printf("enter the choice:");
      scanf("%d",&ch);
      switch(ch)
      {
        case 1:printf("enter the element:");
	       scanf("%d",&item);
	       if((front==rear+1)||(front==0&&rear==n-1))
	       printf("the queue is full");
	       else
	       {
		 if(front==-1)front=0;
		 rear=(rear+1)%n;
		 a[rear]=item;
		 printf("\n insert->%d",item);
	       }
    	       break;
        case 2:
	       if(front==-1)
	       printf("\n circular queue is empty! deletion is not possible!!!\n");
	       else
	       {
                 item=a[front];
		 if(front==rear)
	         {
		   front==-1;
   		   rear==-1;
		 }
		 else
		 {
		   front=(front+1)%n;
		 }
		 printf("\n delete element ->%d\n",item);
	       }
	case 3:
	       if(front==-1)
	       printf("\n empty queue\n");
	       else
	       {
		 printf("enter the element in queue are:\n");
		 for(i=front;i!=rear;i=(i+1)%n)
		 {
		   printf("%d",a[i]);
		 }
		 printf("%d",a[i]);
               }
               break;
               default:
	               printf("\n invalid choice");
	               break;
      }
    }
	while(ch!=4);
}
