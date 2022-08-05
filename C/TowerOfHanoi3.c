#include <stdio.h>

int n = 3;
int count = 0;

void hanoi(int start, int dest, int n)
{
    int help;

    if (n == 1)
    {
        count++;
        printf("Move disk %d from %d to %d\n", n, start, dest);
    }

    else
    {
        help = 6 - start - dest;
        hanoi(start, help, n - 1);

        count++;

        printf("Move disk %d from %d to %d\n", n, start, dest);
        hanoi(help, dest, n - 1);
    }
}

int main(void)
{
    hanoi(1, 3, n);
    printf("Minimum number of moves is %d", count);
}
