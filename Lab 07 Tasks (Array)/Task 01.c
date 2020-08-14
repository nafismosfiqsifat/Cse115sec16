
#include<stdio.h>
int main()
{
    int x;
    int arr[5];
    printf("Enter array elements:\n");
    for(x=0;x<5;x++){
        scanf("%d",&arr[x]);
    }

    printf("Reverse numbers of arrays are:\n");

    for(x=4;x>=0;x--){
        printf("%d\t",arr[x]);
    }
    return 0;
}
