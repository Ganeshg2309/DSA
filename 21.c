#include<stdio.h>
#include<stdlib.h>
void main()
{
int **myarray;
myarray=make2darray(5,10);
myarray[2][4]=6;

int** make2darray(int rows, int cols)
{
int **x,i;
malloc(x,rows * sizeof(*x);;
