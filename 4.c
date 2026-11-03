



#include <stdio.h>
int main()
{
int num1;
int num2;
char operator;
printf("enter your num1:\n");
scanf("%d",&num1);
printf("enter num2:\n");
scanf("%d",&num2);
printf("enter your operator:");
scanf(" %c",&operator);

switch(operator)
{

case'+':
printf("num1+num2=%d\n",num1+num2);
break;

case'-':
printf("num1-num2=%d\n",num1-num2);
break;

default:
printf("invalid operator");
}
return 0;
}
