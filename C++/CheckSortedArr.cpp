#include <iostream>
using namespace std;

bool isSorted(int *a, int n)
{
    if (n == 1)
        return true;

    if (n == 1 && (a[0] < a[1]) && isSorted(a + 1, n - 1))
        return true;

    return false;
}

int main(void)
{
    int n;
    cout << "\nEnter the number of elements: ";
    cin >> n;

    int a[n];

    for (int i = 0; i < n; i++)
        cin >> a[i];

    if (isSorted(a, n))
        cout << "Given Numbers are Sorted...";
    else
        cout << "\nGiven Numbers are not Sorted...";
}
