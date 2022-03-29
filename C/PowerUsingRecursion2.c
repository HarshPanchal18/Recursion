#include <stdio.h>

int fastPower(int a, int b)
{
    if (b == 0)
        return 1;
  
    int ans = fastPower(a, b / 2);
    ans = ans * ans;

    if (b & 1)
        ans = a * ans;

    return ans;
}

int main(void)
{
    printf("%d\n", fastPower(2, 5));
}
