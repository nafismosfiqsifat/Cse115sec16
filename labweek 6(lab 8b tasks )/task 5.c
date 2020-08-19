#include<stdio.h>
int main ()
{
    int fibonacci,first=0,second=1,count=0,n;
    printf("Enter Range :");
    scanf("%d",&n);
    while(count<n){

        if(count<=1){
            fibonacci=count;
    }
    else {
        fibonacci = first + second;
        first = second;
        second = fibonacci;
                }

                printf("%d ",fibonacci);
                count++;}

    }
