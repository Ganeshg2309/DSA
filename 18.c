#include<stdio.h>
#include<stdlib.h>
#define<math.h>
#define MAXSIZE 10
#define swap(a,b,t) ((t)=(a),(a)=(b),(b)=(c))
void binsearch(int [],int searchnum,int left,int right);

void main(void)
{
int i,n;
int list[MAXSIZE];
printf("enter the number of numbers to generate:");
if(n<1||n>MAXSIZE)
{
fprintf(stderr,"Improper value of n\n");
exit(EXIT_FAILURE);
}

binsearch(list,n);

printf("\n sorted array is :\n");
for(i=0;i<n;i++)
printf("%d ",list[i]);
printf("\n");
}

int binsearch(int list[], int searchnum,int left,int right)
{
int middle;
while(left<=right)
{
middle=(left+right)/2;
switch(COMPARE(list[middle],searchnum))
{
case -1:left=middle+1;
break;
case 0:return middle;
case 1:right=middle-1;
}
}
return -1;
}


