#include <stdio.h>
int factorial(int x); //YOU CAN  WRITE, INT OR INT X.
//USE DIFFERENT VAARIABLE FROM MAIN OR DON'T USE VARIABLE IN FUNCTION PROTOTYPE.PREFER USING DIFFEREN VARIABLE.
int main()
{
    int a;
    printf("Please enter  the value of a : \n");
    scanf("%d", &a);
    printf("%d! = %d. \n", a, factorial(a));
    return 0;
}
int factorial(int x)
{
    if (x == 1 || x == 0)
    {
        return 1;
    }
    else
    {
        return x * factorial(x - 1);
    }
}