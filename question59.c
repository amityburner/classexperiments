#include <stdio.h>
int fact(int);

void main()
{
    int n, factorial;

    printf("Enter a number: ");
    scanf("%d", &n);
    factorial = fact(n);
    printf("Factorial of the %d = %d\n", n, factorial);
}

int fact(int n)
{
    int i, f = 1;
    for (i = 1; i <= n; i++)
    {
        f *= i;
    }
    return f;
}
