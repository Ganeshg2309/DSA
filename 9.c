#include<stdio.h>
#include<ctype.h>
#include<string.h>
int stack[10];
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
printf("enter prefix expression:");
scanf("%99s",exp);

for(i=strlen(exp)-1;i>=0;i--)
{
if(isdigit(exp[i]))
{
    push(exp[i]-'0');

}
else
{
    a=pop();
    b=pop();



switch(exp[i])
{
    case '+':
    result=a+b;
    break;
}

push(result);
}
}
printf("result=%d",pop());
}