#include <stdio.h>
int factorial(int x); //USE DIFFERENT VAARIABLE FROM MAIN OR DON'T USE VARIABLE IN FUNCTION PROTOTYPE.PREFER USING DIFFEREN VARIABLE.

int main()
{
    int a;
    printf("Please enter the value of a : \n");
    scanf("%d", &a);
    printf("%d! = %d. \n", a, factorial(a));
    return 0;
}
int factorial(int x)
{
    if (x == 1 || x == 0)
    {
        printf("%d! = 1.", x);
    }
    else
    {
        printf("%d! = x * factorial (x-1). \n", x);
    }
}