#include<stdio.h>
int main(){
int a[5]={10,20,30,40,50};
int i; int pos=2; int n=5;
for(i=pos;i<n-1;i++)
{
a[i]=a[i+1];
}
n=n-1;
for(i=0;i<n;i++)
{
printf(" %d ",a[i]);
}
return 0;
}
	
