#include <stdio.h>
void goodmorning();
void goodafternoon();
void goodnight();
// FUNCTION PROTOTYPE.//USE DIFFERENT VAARIABLE FROM MAIN OR DON'T USE VARIABLE IN FUNCTION PROTOTYPE.PREFER USING DIFFEREN VARIABLE.
int main()
{

    goodmorning();
    goodafternoon();
    goodnight(); //FUNCTION CALL.

    return 0;
}
void goodmorning()
{
    printf("Hi sir, Good morning. \n");
}
void goodafternoon()
{
    printf("Hi sir, Good afternoon. \n");
} //FUNCTION DEFINATION.
void goodnight()
{
    printf("Hi sir, Good night. \n");
}