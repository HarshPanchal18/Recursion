#include <iostream>

using namespace std;
// basic example for recursion
void dec(int n)
{
    if (n == 0)
        return;

    cout << n << " ";
    dec(n - 1);
}

void inc(int n)
{
    if (n == 0)
        return;

    cout << n << " ";
    inc(n - 1);
}

int main(void)
{
    inc(10);
    cout << endl;
    dec(10);
}
