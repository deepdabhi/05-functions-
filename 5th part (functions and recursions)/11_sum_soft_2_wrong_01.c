#include <stdio.h>
int add(int, int, int);
//USE DIFFERENT VAARIABLE FROM MAIN OR DON'T USE VARIABLE IN FUNCTION PROTOTYPE.PREFER USING DIFFEREN VARIABLE.
int main()
{
    int a, b, c;
    printff("Please enter the value of a : \n");
    scanf("%d", &a);
    printff("Please enter the value of b : \n");
    scanf("%d", &b);
    printff("Please enter the value of c : \n");
    scanf("%d", &c);
    add(int, int, int);
    return 0;
}