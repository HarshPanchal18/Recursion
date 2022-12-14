#include <stdio.h>

/*
5
1 2 3
Output: 11

Explanation:
From steps 1, 2, 3, and 4, we can say s(4)=3+2+1=6;
then using the values from step 2, 3, 4, and 5, we get s(5)=6+3+2=11.
*/

int find_nth_term(int n, int a, int b, int c)
{

    if (n == 1)
        return a;
    if (n == 2)
        return b;
    if (n == 3)
        return c;

    return find_nth_term(n - 1, a, b, c) + find_nth_term(n - 2, a, b, c) + find_nth_term(n - 3, a, b, c);
}

int main()
{
    int n, a, b, c;

    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);

    printf("%d", ans);
    return 0;
}
