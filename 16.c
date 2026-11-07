#include<stdio.h>

void print1(int *ptr,int x)
{
int i;
printf("array addresses and values are:");

for(i=0;i<x;i++)
{
printf("%p %d\n",(void *)ptr,*(ptr+i));
}
printf("\n");
}

int main(){
int a[5]={10,20,30,40,50};
print1(a,5);
return 0;
}
