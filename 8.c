#include<stdio.h>
#include<ctype.h>
int stack[100];
int top=-1;

void push(int value)
{
	stack[++top]=value;

}
int pop()
{
	return stack[top--];
}

int main()
{
	char exp[100];
	int i,a,b,result;
	printf("enter postfix expression:");
	scanf("%s",exp);

	for(i=0;exp[i]!='\0';i++)
	{
		if(isdigit(exp[i]))
		{
			push(exp[i]-'0');
		}
		else
		{
			b=pop();
			a=pop();
		

		switch(exp[i])
		{
			case '+':
			result=a+b;
			break;

			case '-':
			result=a-b;
			break;

			case '*':
			result=a*b;
			break;

			case '/':
			result=a/b;
			break;
		}
		push(result);
	}
}
printf("result=%d",pop());
return 0;
}