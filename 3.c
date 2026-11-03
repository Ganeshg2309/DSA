#include <stdio.h>
int main()
{
int num1,num2;
printf("enter your num1: \n");
scanf("%d",&num1);
printf("enter your num2: \n");
scanf("%d",&num2);

if (num1>num2)
{
printf("%d is greater than %d\n",num1,num2);
}
else if(num2>num1)
{
printf("%d is greater\n",num2);
}
else
{
printf("both numbers are equal\n");
}
return 0;
}
