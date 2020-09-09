#include <stdio.h>
void findEvenOdd(int arr[],int x);
int main ()
{
    int x;
    printf("Enter array length:");
    scanf("%d", &x);
    int arr[x];
    for (int i=0; i<x; ++i)
    {
        scanf("%d", &arr[i]);
    }
    findEvenOdd(arr, x);
    return 0;
}
void findEvenOdd(int arr[],int x)
{
    for (int i=0; i<x; ++i)
    {
        if(arr[i]%2==0)
        {
            printf("%d is even\n", arr[i]);
        }
        else if (arr[i]%2!=0)
        {
            printf("%d is odd\n", arr[i]);
        }
    }
}
