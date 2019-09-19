#define size 50
#include<stdio.h>
int s[size];
int top=-1;
push(int elem)
{
  s[++top]=elem;
}
int pop()
{
  return(s[top--]);
}
main()
{
  char pofx[50],ch;
  int i=0,op1,op2;
  printf("\n enter the postfix expression:");
  scanf("%s",pofx);
  while((ch=pofx[i++]!=' ')
  {
    if(isdigit(ch)) push(ch-'0');
    else
    {
      op2=pop();
      op1=pop();
      switch(ch)
      {
	case '+':push(op1+op2);
	break;
	case '-':push(op1-op2);
	break;
	case '*':push(op1*op2);
	break;
	case '/':push(op1/op2);
	break;
      }
    }
  }
  printf("\n Given postfix expression:%s",pofx);
  printf("\n Result after evaluation:%d",s[top]);
}
