#include <stdio.h>

long power(int no, int pow)
{
    if (pow)
        return (no * power(no, pow - 1));
    return 1;
}
int main(void)
{
    int no, pwr;
    long res;
    printf("\nEnter number: ");
    scanf("%d", &no);
    printf("\nEnter power: ");
    scanf("%d", &pwr);

    res = power(no, pwr);

    printf("%d ^ %d = %d", no, pwr, res);
}