#include <iostream>

using namespace std;

int fibb(int n)
{
    if (n == 0)
        return 0;

    if (n == 1)
        return 1;

    int ans = fibb(n - 1) + fibb(n - 2);
    return ans;
}

int main(void)
{
    int n;
    cout << "\nEnter a number: ";
    cin >> n;

    cout << fibb(n - 1); // Counts 0
}
