#include <stdio.h>

/* Without recursion */
unsigned long long fact_iter(int n)
{
    unsigned long long f = 1;
    int i;
    for (i = 1; i <= n; i++)
        f = f * i;
    return f;
}

/* With recursion */
unsigned long long fact_rec(int n)
{
    if (n == 0 || n == 1)
        return 1;
    return n * fact_rec(n - 1);
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("Factorial of a negative number is not defined\n");
        return 0;
    }

    printf("Factorial without recursion = %llu\n", fact_iter(n));
    printf("Factorial with recursion    = %llu\n", fact_rec(n));

    return 0;
}