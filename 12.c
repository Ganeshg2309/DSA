#include<stdio.h>
#include<stdlib.h>
int main()
{
int *pi;
float *pf;

if(!(pi=malloc(sizeof(int)))||!(pf=malloc(sizeof(float))))
{
fprintf(stderr,"insufficient memory");
exit(EXIT_FAILURE);
}
else
{
printf("adress is allocated");
}
return 0;
}
