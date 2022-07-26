#include <stdio.h>

// static in recursion
int fun(int n)
{
    static int x = 0;
    if (n > 0)
    {
        x++;
        return fun(n - 1) + x;
    }
    return 0;
}

// Global in recursion
int x = 0;

int fun1(int n)
{
    if (n > 0)
    {
        x++;
        return fun(n - 1) + x;
    }
    return 0;
}

int main()
{
    int r;
    r = fun(5);
    printf("%d\n", r); // 25

    r = fun(5);
    printf("%d\n", r); // 50

    r = fun1(5);
    printf("%d\n", r); // 57

    r = fun1(5);
    printf("%d\n", r); // 74

    return 0;
}
