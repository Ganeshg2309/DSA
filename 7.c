#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int stack[MAX];
int top=-1;

void push(int value)
{
if(top==MAX-1)
{
printf("stack overflow\n");
}
else
{
top++;
stack[top]=value;
printf("stack value inserted\n");

}
}



void pop()
{
if(top==-1)
{
printf("staxk unserflow\n");
}
else
{
printf("deleted",stack[top]);
top--;
}
}


void peek()
{
if(top==-1)
{
printf("stack is empty");
}
else
{
printf("top elemnt is :%d\n",stack[top]);
}
}


void display()
{
if(top==-1)
{
printf("stack is empty");
}
else
{
int i;
for(i=top;i>=0;i--)
{
	printf("%d\n",stack[i]);
}
}
}





int main(){
int choice,value;
while(100)
{
printf("\n 1.push\n2.pop\n3.peek\n4.display");
printf("enter your choice\n");
scanf("%d",&choice);

switch(choice)
{
case 1:
	printf("enter your value");
	scanf("%d",&value);
	push(value);
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
}}}
