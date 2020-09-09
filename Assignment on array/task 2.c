#include <stdio.h>
void reverseArr (int arr[], int y);
int main()
{
    int y;
    printf("Enter array length:");
    scanf("%d", &y);
    int arr[y];
    for (int i=0; i<y; ++i)
    {
        scanf("%d", &arr[i]);
    }
    reverseArr(arr, y);
    return 0;
}
void reverseArr (int arr[], int y)
{
    int i=0, revArr[y];
    for (int j=y-1; j>=0; --j)
    {
        revArr[j] = arr[i];
        i++;
    }
    printf("Main array:\n");
    for (int i=0; i<y; ++i)
    {
        printf("a[%d] = %d\n", i, arr[i]);
    }
    printf("Reverse Array:\n");
    for (int i=0; i<y; ++i)
        printf("a[%d] = %d\n", i, revArr[i]);
}
