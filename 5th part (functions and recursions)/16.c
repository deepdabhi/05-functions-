#include <stdio.h>
int fib(int n);
int main()
{
    int z;
    printf("Please enter a number : \n");
    scanf("%d", &z);
    int a = 0, b = 1;
    printf("%d %d ", a, b);
    printf("%d ", fib(z));
    return 0;
}
int fib(int n)
{
    int z, x;
    printf("Please again enter same number : \n");
    scanf("%d", &n);
    int a = 0, b = 1;
    while (x < n)
    {
        x = a + b;
        if (x > n)
        {
            break;
        }
        printf("%d ", x);
        a = b;
        b = x;
    }
}