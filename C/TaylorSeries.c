#include <stdio.h>

// https://en.wikipedia.org/wiki/Taylor_series

double e(int x, int n)
{
    static double p = 1, f = 1;
    double r;

    if (n == 0)
        return 1;

    r = e(x, n - 1);
    p *= n;
    f *= x;
    return r + p / f;
}

int main(void)
{
    printf("%lf \n", e(4, 15));
    return 0;
}
