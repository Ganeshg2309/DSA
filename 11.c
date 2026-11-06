
#include<stdio.h>
#include<stdlib.h>

int *pi;
float *pf;

int main(){
if((pi=(int*) malloc(sizeof(int)))==NULL || (pf=(float*) malloc(sizeof(float)))==NULL){
fprintf(stderr,"Insufficient memmory");
exit(EXIT_FAILURE);
}
return 0;
}
