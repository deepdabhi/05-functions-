#include <stdio.h>
int sum(int a, int b, int c); //FUNCTION PROTOTYPE.
//USE DIFFERENT VAARIABLE FROM MAIN OR DON'T USE VARIABLE IN FUNCTION PROTOTYPE.PREFER USING DIFFEREN VARIABLE.
int main()
{
    int a, b, c, d;
    printf("Please enter a : ");
    scanf("%d", &a);
    printf("Please enter b : ");
    scanf("%d", &b);
    printf("Please enter c : ");
    scanf("%d", &c);
    c = sum(int a, int b, int c);
    return 0;
}
