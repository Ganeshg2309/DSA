#include<stdio.h>
int main(){
    int a[5]={10,20,30,40,50};
    int i,psn=2,n=5,val=25;
    for(i=n-1;i>=psn;i--)
    {
        a[i+1]=a[i];
    }
    a[psn]=val;
    for(i=0;i<6;i++)
    {
        printf(" %d ",a[i]);
    }
    return 0;
}
