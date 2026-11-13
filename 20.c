#include<stdio.h>
#include<stdlib.h>
void main()
{
int i,n,*list;
printf("enter your number of numbers to generate ");
scanf("%d",&n);
if(n<1){
fprintf(stderr,"Improper value");
exit(EXIT_FAILURE);
}
list=(int *)malloc(n*sizeof(int));
if(list==NULL)
{
    fprintf(stderr,"insufficient memory");
    exit(EXIT_FAILURE);
}
printf("one dimentional array is created");
}
