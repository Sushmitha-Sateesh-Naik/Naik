#include<stdio.h>
int main()
{
    int arr[5];
    printf("enter 5 elements in the array:\n");
    for (int i = 0; i < 5; i++ )
    {
        scanf("%d", &arr[i]);
    }
    printf("The Original array is : [");
    for (int i = 0; i<5; i++)
    {
        if (i < 4)
        {
            printf("%d,",arr[i]);
        }
        else
        {
            printf("%d",arr[i]);
        }
    }
    printf("]\n");
    int sum = 0;
    for (int i = 5-1; i >=0; i--)
    {
        sum +=arr[i];
    }
    printf("The sum of array elements is : %d",sum);
    return 0;
}