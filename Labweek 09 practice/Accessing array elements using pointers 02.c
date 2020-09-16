#include <stdio.h>

int main ()
{
    int arr[4]={2,5,1,6};
    int *ptr=arr;
    int i;
    for(i=0;i<4;i++)
    {
        printf("*ptr[%d]=%d\n",i,*(ptr+i));
    }

    printf("\n\n");

    char str[]="hello";
    char *chptr;
    chptr=str;
    puts(str);
    puts(chptr);

    printf("\n\n");

    char str1[]="hello";
    char *chptr1;
    chptr1=str1;
    i=0;
    while(str1[i]!='\0')
    {
        printf("%c",*chptr1+i);
        i++;
    }

    printf("\n\n");

    char str2[]="hello";
    char *chptr2;
    chptr2=str2;
    i=0;
    while(str2[i]!='\0')
    {
        printf("%c",*(chptr2+i));
        i++;
    }

    return 0;
}
