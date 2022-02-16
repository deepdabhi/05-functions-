#include<stdio.h>
void goodmorning ();
void goodafternoon ();
void goodnigt ();
// FUNCTION PROTYPE.//USE DIFFERENT VAARIABLE FROM MAIN OR DON'T USE VARIABLE IN FUNCTION PROTOTYPE.PREFER USING DIFFEREN VARIABLE.
int main(){
    void goodmorning (){
        printf ("Good morning sir. \n");
    }//FUNCTION CALL & FUNCTION DEFINATION.
    void goodafternoon (){
        printf ("Good afternoon sir. \n");
    }
    void goodnight (){
        printf ("Good night sir. \n");
    }
    return 0;
}