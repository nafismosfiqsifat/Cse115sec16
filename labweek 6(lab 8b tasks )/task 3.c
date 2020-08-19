#include <stdio.h>
double getArea(int a, int b, int h);
int main()
{
    int x, y, z;
    double result;
    printf("Enter a:\n");
    scanf("%d", &x);
    printf("Enter b:\n");
    scanf("%d", &y);
    printf("Enter h:\n");
    scanf("%d", &z);
    printf("Area of trapezoid: %lf", result=getArea(x, y, z));
    return 0;
}
double getArea(int a, int b, int h)
{
    double result=.5*(a+b)*h;
    return result;
}

