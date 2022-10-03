/*
Given a number , check whether the number is power of 2 or not.
We can check this by doing some bitwise operation.
Bitwise operations are best because they perform the operation in least possible time.
*/

#include <stdio.h>
#include <stdbool.h>

bool isPowerOfTwo(int n)
{
    if (n == 0)
        return false;
    if (n == 1)
        return true;
    return !(n % 2) && isPowerOfTwo(n /= 2);
}

int main(void)
{
    int number;
    printf("\nEnter a number: ");
    scanf("%d", &number);

    if (isPowerOfTwo(number))
        printf("%d is power of 2", number);
    else
        printf("%d is not power of 2", number);
}
