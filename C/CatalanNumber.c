/*
The Catalan numbers form a sequence of natural numbers that occur in various
counting problems, often involving recursively-defined objects.
*/

#include <stdio.h>

int catalan(int n)
{
    if (n <= 1)
        return 1;

    int res = 0;

    for (int i = 0; i < n; i++)
        res += catalan(i) * catalan(n - i - 1);

    return res;
}

int main(void)
{
    int n;
    printf("\nEnter the number: ");
    scanf("%d", &n);

    for (int i = 0; i <= n; i++)
        printf("%d ", catalan(i));
}
// Enter the number : 7
// 1 1 2 5 14 42 132 429
