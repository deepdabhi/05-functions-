#include <stdio.h>
int main()
{
    long int n;
    while (1)
    {
        printf("Enter a number : \n");
        scanf("%d", &n);
        isPrime(n);
    }
    return 0;
}
void isPrime(long int a)
{
    if (a <= 1)
    {
        printf("%d is not a prime number. \n", a);
    }
    int c = 2;
    while (c * c <= a)
    {
        if (a % c == 0)
        {
            printf("%d is not a prime number. \n", a);
            break;
        }
        c++;
    }
    if (c * c > a)
    {
        printf("%d is a prime number. \n", a);
    }
    return 0;
}