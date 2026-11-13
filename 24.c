#include<stdio.h>
int binarysearch(int arr[],int low, int high, int key)
{
while(low<=high)
{
int mid=low+(high-low)/2;
if(arr[mid]==key)
return mid;
if(arr[mid]<key)
low=mid+1;
else
high=mid-1;
}

return -1;
}


int main()
{
int arr[]={10,25,35,45,55,65,75,85,95};
int key=35;
int low=0,high=sizeof(arr)/sizeof(arr[0]-1),mid=low+(high-low)/2;
int result=binarysearch(arr,low,high,key);
if(result!=-1)
printf("%d found in %d th index",key,result);
else
printf("%d not found in array",key);
return 0;
}
























