
#include<stdio.h>

int linearsearchrecursive(int arr[],int size, int key, int index)
{
int i=0;
if(index>=size){
return -1;
}
if(arr[index]==key)
{
return index;
}
return linearsearchrecursive(arr,size,key,index+1);

}

int main()
{
int arr[]={10,25,35,46,24};
int key=25;
int size=sizeof(arr)/sizeof(arr[0]);

int result=linearsearchrecursive(arr,size,key,0);
if(result==-1)
{
printf("ele %d not found in arr",key);
}
else
{
printf("ele %d found in %d th position",key,result+1);
}
return 0;
}
