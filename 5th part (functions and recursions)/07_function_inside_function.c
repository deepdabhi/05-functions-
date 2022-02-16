#include <stdio.h>
void goodmorning();
void goodafternoon();
void goodnight();
//FUNCTION PROTOTYPE.//USE DIFFERENT VAARIABLE FROM MAIN OR DON'T USE VARIABLE IN FUNCTION PROTOTYPE.PREFER USING DIFFEREN VARIABLE.
int main()
{
    printf("Now function is initialaised. \n");
    goodmorning(); //FUNCTION CALL.
    printf("Now function is executed. \n");
    return 0;
}
void goodmorning()
{
    printf("His sir, goodmorning. \n");
    goodafternoon();
} //FUNCTION DEFINATION.
void goodafternoon()
{
    printf("His sir, goodafternoon. \n");
    goodnight();
}
void goodnight()
{
    printf("His sir, goodnight. \n");
}
// Here, main called goodmorning directly and indirectly to the goodnight and goodafternoon.