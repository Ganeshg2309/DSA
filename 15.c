#include<stdio.h>

void print1(int *ptr, int rows)
{
int i;
printf("answers contents\n");
for(i=0;i<rows;i++)
	printf("%p %5d\n",(void *)ptr+i,*(ptr+i));
printf("\n");
}


int main()
{
int a[5]={10,20,30,40,50};
print1(a,5);
return 0;
}
