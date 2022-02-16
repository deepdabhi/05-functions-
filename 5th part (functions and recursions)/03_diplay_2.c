#include <stdio.h>
void display()
{
    printf("Hi, this is function. \n");
} //FUNCTION PROTOTYPE & FUNCTION DEFINATION.

int main()
{
    printf("function is initialaised. \n");
    display(); //FUNCTION CALL.
    printf("function is now over. \n");
    return 0;
}
//  at the place where the " display ()" is written in the programme, int will automatically go to  sleep, untill the the function is not executed.
//  hence, we can write the void diplay before return 0 or after 0.
//  VIVEK BUDHDHI VAPARVI.