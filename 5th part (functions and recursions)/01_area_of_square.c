#include <stdio.h>
#include <math.h>

int main()
{
    int side;
    printf("Enter the value of side : \n");
    scanf("%d", &side);
    printf("The value of area is %f. \n", pow(side, 2));
    //"Used %f rather than %d because, pow is a double type variable."
    return 0;
}