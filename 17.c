#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define MAX_SIZE 10
#define swap(a,b,t) ((t)=(a),(a)=(b),(b)=(t))
void sort(int [],int);
void main(void)
{
int i,n;
int list[MAX_SIZE];
printf("enter the number of numbers to generate:");
scanf("%d",&n);
if(n<1||n>MAX_SIZE)
{
fprintf(stderr,"improper value of n");
exit(EXIT_FAILURE);
}

for(i=0;i<n;i++)
{
list[i]=rand() % 1000;
printf("%d",list[i]);
}

sort(list,n);

printf("\n sorted array :\n");
for(i=0;i<n;i++)
printf("%d ",list[i]);
printf("\n");
}

void sort(int list[],int n)
{
int i,j,min,t;
for(i=0;i<n-1;i++)
{
min=i;
for(j=i+1;j<n;j++)
if(list[j]<list[min])
min=j;
swap(list[i],list[min],t);
}
}	

