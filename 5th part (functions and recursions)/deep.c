#include <stdio.h>

int main()
{
    int a, b;
    float c;
    printf("Please enter the value of a : \n");
    scanf("%d", &a);
    printf("Please enter the value of b : \n");
    scanf("%d", &b);
    c = (a + b);
    printf("c = %f.", c);
    return 0;
}