#include <stdio.h>

int countZeros(int n)
{
    if (n <= 9)
        if (n == 0)
            return 1;
        else
            return 0;

    if (n % 10 == 0)
        return 1 + countZeros(n / 10); // we will add 1 for that ^
    else
        return countZeros(n / 10);
}

int main()
{
    int i = 110103;
    printf("%d",countZeros(i));
}
