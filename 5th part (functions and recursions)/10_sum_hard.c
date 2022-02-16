#include <stdio.h>
int add(int, int, int); //FUNCTION PROTOTYPE.// YOU CAN WRITE INT A,INT B,INT C OR INT,INT,INT. ONLY HERE.
// BUT PREFER INT A,INT B,INT C.
//USE DIFFERENT VAARIABLE FROM MAIN OR DON'T USE VARIABLE IN FUNCTION PROTOTYPE.PREFER USING DIFFEREN VARIABLE.
int main()
{
    int d;
    d = add(555, 555, 555); //FUNCTION CALL.
    printf("%d. \n", d);
    return 0;
}
int add(int a, int b, int c)
{
    int result;
    result = (a + b + c);
    return result;
} //FUNCTION DEFINATION.
