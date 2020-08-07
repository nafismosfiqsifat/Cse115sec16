#include<stdio.h>
void main(){

char print='*';
int row,col;
int noOfRows=5;
printf("Enter Number of Rows\n");
scanf("%d",&noOfRows);

for(row=1;row<=noOfRows;row++){


    for(col=1;col<=row;col++){
        printf("%c",print);

    }
    printf("\n");
}




















}
