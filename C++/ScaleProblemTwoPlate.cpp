/*
When trying to weigh using a double-armed scale with a plate on the left and right,
In order to minimize the type and number of weights to be used, which weight should be used and
how Write a program that prints 2. If both plates can be used
*/

#include <stdio.h>

int weight = 14;
int chu = 1;

void base(int n)
{
    int r;

    if (n == 0)
        return;

    else
    {
        r = n % 3;
        n /= 3;

        if (r == 1)
            printf("put %dg weight on the left\n", chu);

        else if (r == 2)
        {
            n++;
            printf("put %dg weight on the right\n", chu);
        }
        chu *= 3;
        base(n);
    }
}

int main(void)
{
    base(weight);
}

/*
weight = 14,
put 1g weight on the right
put 3g weight on the right
put 9g weight on the right
put 27g weight on the left

weight = 10,
put 1g weight on the left
put 9g weight on the left

weight = 6,
put 3g weight on the right
put 9g weight on the left
*/
