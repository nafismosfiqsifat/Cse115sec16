#include <stdio.h>
void mergeAndSort (int x1, int arr1[], int x2, int arr2[]);
int main()
{
    int size1, size2;
    printf("Enter range for array1: ");
    scanf("%d", &size1);
    int arr1[size1];
    for(int i=0; i<size1; i++)
    {
        printf("A [%d] = ", i);
        scanf("%d", &arr1[i]);
    }
    printf("Enter range for array2: ");
    scanf("%d", &size2);
    int arr2[size2];
    for (int i=0; i<size2; i++)
    {
        printf("B [%d] = ", i);
        scanf("%d", &arr2[i]);
    }
    mergeAndSort (size1, arr1, size2, arr2);
    return 0;
}
void mergeAndSort (int x1, int arr1[], int x2, int arr2[])
{
    int i, j, k, x3=x1+x2;
    int arr3[x3];
    for (i=0; i<x1; i++)
    {
        arr3[i] = arr1[i];
    }
    for (j=0; j<x2; j++)
    {
        arr3[i] = arr2[j];
        i++;
    }
    printf("\nNew array after merging:\n");
    for (i=0; i<x3; i++)
    {
        printf("%d   ", arr3[i]);
    }
    for(i=0; i<x3; i++)
    {
        for(k=0; k<x3-1; k++)
        {
            if(arr3[k]>=arr3[k+1])
            {
                int temp;
                temp=arr3[k+1];
                arr3[k+1]=arr3[k];
                arr3[k]=temp;
            }
        }
    }
    printf("\nNew array after merging and sorting (ascending) :\n");
    for(i=0; i<x3; i++)
    {
        printf("%d   ", arr3[i]);
    }
}
