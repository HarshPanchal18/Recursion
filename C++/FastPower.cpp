#include <iostream>

using namespace std;

typedef int T; // Change type if needed

T fastPower(const T &base, const T &power)
{
    if (power == 0)
        return 1;

    if (power == 1)
        return base;

    T ret = fastPower(base, power / 2);
    ret *= ret;

    if (power % 2 == 1)
        ret *= base;

    return ret;
}

int main(void)
{
    cout << fastPower(2, 3);
}
