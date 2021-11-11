#include <stdio.h>

int multy(int a, int b)
{
    static int i = 0, p = 0;
    if (i < b)
    {
        p += a;
        i++;
        multy(a, b);
    }
    return p;
}

int main(void)
{
    int a, b, result;
    printf("\nEnter two numbers: ");
    scanf("%d%d", &a, &b);
    result = multy(a, b);
    printf("\nMultiplication: %d ", result);
}