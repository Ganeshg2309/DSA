#include<stdio.h>
int linearsearch(int arr[],int key,int size)
{
int i;
for(i=0;i<size;i++)
{
if(arr[i]==key)
{
return i;
}
}
return -1;
}

int main()
{
int arr[]={10,20,25,35,45,50};
int size=6;
int key;
printf("enter the element to search\n");
scanf("%d",&key);
int result=linearsearch(arr,key,size);
if(result!=-1)
{
printf("element %d found in %d th posion",key,result);
}
else
{
printf("element %d not found in array ",key);
}
return 0;
}

