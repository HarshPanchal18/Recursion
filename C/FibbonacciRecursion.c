#include <stdio.h>

long long Fibbo(int n)
{
    static long long fib[100] = {};
    fib[1] = 0;
    fib[2] = 1;

    if (n == 1 || n == 2)
        return fib[n];

    else
    {
        fib[n] = Fibbo(n - 1) + Fibbo(n - 2);
        return fib[n];
    }
}

int main(void)
{
    int n;
    printf("\nEnter a number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
        printf("%lld\n", Fibbo(i)); // llu is also do the same representation
}