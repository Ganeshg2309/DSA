#include<stdlib.h>
#include<stdio.h>

#define MALLOC(p,s)\
if(!((p)=malloc(s)))\
{\
fprintf(stderr,"insufficient memmory");\
exit(EXIT_FAILURE);\
}

int main()
{
int *pi;
float *pf;
MALLOC(pi,sizeof(int));
MALLOC(pf,sizeof(float));
printf("memory is alocated");
free(pi);
free(pf);
return 0;
}

