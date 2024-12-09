#include<stdio.h>
int main()
{
    int x=10;
    int *p=&x;
    printf("value of x : %d",x);
    printf("\nAddress of x : %p",*p);
    printf("\n pointer p: %p", *p);
    printf("\n p: %p",*p);
}