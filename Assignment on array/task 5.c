#include <stdio.h>
void replacePosition (int x, int arr[], int position, int replace_by);
int main()
{
    int size, position, replace_by;
    printf("Enter range for array: ");
    scanf("%d", &size);
    int arr[size];
    for(int i=0; i<size; ++i)
    {
        printf("A [%d] = ", i);
        scanf("%d", &arr[i]);
    }
    printf("Position you want to replace:");
    scanf("%d", &position);
    if (position>=1 && position<=size)
    {
        printf("Enter element to replace:");
        scanf("%d", &replace_by);
        replacePosition (size, arr, position, replace_by);
    }
    else
        printf("Please enter position to replace within 1 to %d\n", size);
    return 0;
}
void replacePosition (int x, int arr[], int position, int replace_by)
{
    arr[position-1] = replace_by;
    printf("\nArray after replacing:\n");
    for (int i=0; i<x; ++i)
    {
        printf("%d ", arr[i]);
    }
}

