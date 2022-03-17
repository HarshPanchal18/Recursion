#include<stdio.h>

int recursiveFact(int n)
{
    if (n == 1 || n == 0)
        return 1;
    else
        return n * recursiveFact(n - 2);
}

int main(void)
{
    int n;
    printf("\nEnter a number: ");
    scanf("%d", &n);

    int r = iterativeFact(n);
    printf("%d\n", r);

    r = recursiveFact(n);
    printf("%d\n", r);
}
