
#include<stdio.h>
#define MAXSIZE 100
float sum(float [],int);
float list1[MAXSIZE],answer;
int main(void)
{
    int i;
    for(i=0;i<MAXSIZE;i++)
    list1[i]=i;
    answer=sum(list1,MAXSIZE);
    printf("the sum is : %f\n",answer);
    return 0;

}
float sum(float list[], int n)
{
    int i;
    float tempsum=0;
    for (i=0;i<n;i++)
    tempsum+=list[i];
    return tempsum;

}
