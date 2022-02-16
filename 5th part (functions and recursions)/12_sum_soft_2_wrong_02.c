#include <stdio.h>
int add(int, int, int);
//USE DIFFERENT VAARIABLE FROM MAIN OR DON'T USE VARIABLE IN FUNCTION PROTOTYPE.PREFER USING DIFFEREN VARIABLE.
int main()
{
    int a, b, c;
    printf("Please enter the value of a : \n");
    scanf("%d", &a);
    printf("Please enter the value of b : \n");
    scanf("%d", &b);
    printf("Please enter the value of c : \n");
    scanf("%d", &c);
    printf("%d+%d+%d=%d. \n", a, b, c, add(x, y, z));
    return 0;
}
int add(int x, int y, int z)
{
    return x + y + z;
}