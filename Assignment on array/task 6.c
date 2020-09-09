#include <stdio.h>
void top_three_largest (int x, int arr[]);
int main()
{
    int size;
    printf("Enter range for array: ");
    scanf("%d", &size);
    int arr[size];
    for(int i=0; i<size; ++i)
    {
        printf("A [%d] = ", i);
        scanf("%d", &arr[i]);
    }
    top_three_largest(size, arr);
    return 0;
}
void top_three_largest (int x, int arr[])
{
    int i, j, swap;
    for(i=0; i<x; i++)
    {
        for(j=0; j<x-1; j++)
        {
            if(arr[j]>=arr[j+1])
            {
                int temp;
                swap=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=swap;
            }
        }
    }
    printf("\nLargest three elements are: %d %d %d\n", arr[x-1], arr[x-2], arr[x-3]);
}
