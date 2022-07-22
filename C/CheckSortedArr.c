#include <stdio.h>

int isSorted(int *a, int n)
{
    if (n == 1 || (a[0] < a[1]) && isSorted(a + 1, n - 1))
        return 1;

    return 0;
}

int main(void)
{
    int n;
    printf("\nEnter the number of elements: ");
    scanf("%d", &n);

    int a[n];

    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    if (isSorted(a, n))
        printf("Given Numbers are Sorted...");
    else
        printf("\nGiven Numbers are not Sorted...");
}
