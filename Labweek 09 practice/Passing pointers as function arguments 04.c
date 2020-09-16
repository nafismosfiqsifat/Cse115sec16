#include <stdio.h>

void swap(int *p, int *q);
void print(char *s);
void reverse(char *s);

int main ()
{
    int a=2,b=3;
    swap(&a,&b);
    printf("a= %d b= %d",a,b);

    printf("\n \n");

    char ptr[]="simple";
    print(ptr);

    printf("\n\n");

    char str[20];
    gets(str);
    reverse(str);
    puts(str);

    return 0;
}
void swap(int *p, int *q)
{
    int temp=*p;
    *p=*q;
    *q=temp;
}

void print(char *s)
{
    while(*s!='\0')
    {
        printf("%c",*s);
        s++;
    }
}

void reverse(char *s)
{
    int i, len=0;
    for(i=0;s[i]!='\0';i++)
    {
        len++;
    }
    for(i=0;i<len/2;i++)
    {
        char temp=s[i];
        s[i]=s[len-i-1];
        s[len-i-1]=temp;
    }
}
