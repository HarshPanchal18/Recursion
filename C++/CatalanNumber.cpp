#include <bits/stdc++.h>

using namespace std;

typedef long long T;

int const MAX = 30;

T dp[MAX]; // to memorize results

T catalan(T n)
{
    if (n <= 1)
        return 1;

    T &ref = dp[n];
    // check if solution for 'n' th is already calculated or not
    if (ref != -1)
        return ref;

    T res = 0;
    for (T i = 0; i < n; i++) // Calculate Nth catalan
        res += catalan(i) * catalan(n - i - 1);

    ref = res;
    return res;
}

int main(void)
{
    memset(dp, -1, sizeof(dp)); // Initialize dp with -1 values
    T n;
    cin >> n;
    for (int i = 0; i <= n; i++)
        cout << " " << catalan(i);
}

// 7
// 1 1 2 5 14 42 132 429
