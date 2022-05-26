#include <bits/stdc++.h>

using namespace std;

void generate(int o, int c, string out)
{
    if (o > c)
        return;

    if (c == 0 && c == 0)
    {
        cout << out << endl;
        return;
    }

    if (o != 0)
        generate(o - 1, c, out + "(");

    if (c != 0)
        generate(o, c - 1, out + ")");
}

int main(void)
{
    int n;
    cin >> n;
    string out;
    generate(n, n, out);
}
/*
3
((()))
(()())
(())()
()(())
()()()

4
(((())))
((()()))
((())())
((()))()
(()(()))
(()()())
(()())()
(())(())
(())()()
()((()))
()(()())
()(())()
()()(())
()()()()
*/
