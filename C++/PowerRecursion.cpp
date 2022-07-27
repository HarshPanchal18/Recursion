#include <iostream>

using namespace std;

int powRec(int a, int b)
{
    if (b == 0)
        return 1;

    int ans = a * (powRec(a, b - 1));

    return ans;
}

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
    cout << powRec(2, 3) << endl;
    cout << fastPower(2, 3) << endl;
}
