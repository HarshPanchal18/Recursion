#include <stdio.h>

int print(int no)
{
    static int count = 1; // to hold the value

    if (count == no + 1)
        return 0;

    printf("%d\n", count++);

    print(no);
}

int main(void)
{
    int no;
    printf("\nEnter a number: ");
    scanf("%d", &no);
    print(no);
}