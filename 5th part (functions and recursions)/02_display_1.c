#include <stdio.h>
void display(); //FUNCTION PROTOTYPE.

int main()
{
    printf("Function is initialaised. \n");
    display(); //FUNCTION CALL.
    printf("Function is now over. \n");
    return 0;
}
void display()
{
    printf("Hi, this is function. \n");
} //FUNCTION DEFINATION.
//  at the place where the " display ()" is written in the programme, int will automatically go to  sleep, untill the the function is not executed.
//  hence, we can write the void diplay before return 0 or after 0.
//  VIVEK BUDHDHI VAPARVI.
