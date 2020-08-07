#include<stdio.h>
void main(){

int noOfRows;
printf("Enter Number of rows\n");
scanf("%d",&noOfRows);
int row,col;
int noOfColToPrint=noOfRows;
for(row=1;row<=noOfRows;row++){


    for(col=1;col<=noOfColToPrint;col++){
        printf("*");

    }
    printf("\n");
    noOfColToPrint--;
}

}
