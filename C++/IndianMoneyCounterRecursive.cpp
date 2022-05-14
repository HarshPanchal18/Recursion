#include <iostream>
#include <vector>
#include <algorithm>
// Greedy
using namespace std;

int indCurrency[] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 2000};
int n = sizeof(indCurrency) / sizeof(indCurrency[0]);

bool compare(int a, int b)
{
    return a <= b;
}

void countNotes(int money, vector<int> &v)
{
    if (money == 0)
        return;

    int idx = lower_bound(indCurrency, indCurrency + n, money, compare) - indCurrency - 1;
    int m = indCurrency[idx];
    v.push_back(m);

    countNotes(money - m, v);
}

int main(void)
{
    int money;
    cin >> money;

    vector<int> v;

    countNotes(money, v);

    for (int note : v)
        cout << note << " + ";
    cout << "0" << endl;

    cout << v.size() << " needed" << endl;
}

/*
1756
500 + 500 + 500 + 200 + 50 + 5 + 1 + 0
7 needed
*/
