#include <stdio.h>
int factorial(int x); // YOU CAN WRITE INT A,INT B,INT C OR INT,INT,INT. ONLY HERE.
// BUT PREFER INT A,INT B,INT C.
//USE DIFFERENT VAARIABLE FROM MAIN OR DON'T USE VARIABLE IN FUNCTION PROTOTYPE.PREFER USING DIFFEREN VARIABLE.

int main()
{
    int a;
    printf("Enter the value of a : \n");
    scanf("%d", &a);
    printf("%d! = %d", a, factorial(a));
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