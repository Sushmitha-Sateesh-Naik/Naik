#include<stdio.h>
int main()
{
    int x=0,y=0;
    printf("enter a number:");
    scanf("%d",&x);
    printf("enter second number:");
    scanf("%d",&y);
    int *p=&x, *q=&y;
    if (*p > *q)
    {
        printf("Max number is : %d", *p);
        printf("address: %p",p);
    }
    else
    {
         printf("Max number is : %d", *q);
        printf("address: %p",q);
    }
    return 0;
}
