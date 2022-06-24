#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int n;
int roma['Z'];
string roma2;

int rom2num(string temp)
{
    int res = roma[temp[0]];

    for (int i = 1; i < temp.size(); i++)

        if (roma[temp[i - 1]] < roma[temp[i]])
            res += roma[temp[i]] - roma[temp[i - 1]] * 2;
        else
            res += roma[temp[i]];

    return res;
}

string num2rom(int n)
{
    string temp;
    switch (n)
    {
    case 0:
        return "";
    case 1:
        return "I";
    case 5:
        return "V";
    case 10:
        return "X";
    case 50:
        return "L";
    case 100:
        return "C";
    case 500:
        return "D";
    case 1000:
        return "M";
    case 4:
        return "IV";
    case 9:
        return "IX";
    case 40:
        return "XL";
    case 90:
        return "XC";
    case 400:
        return "CD";
    case 900:
        return "CM";

    default:
        if (n / 10 == 0)
        {
            if (n > 5)
            {
                n -= 5;
                temp += num2rom(5);
            }
            if (n % 3 == 1)
                temp += "I";
            if (n % 3 == 2)
                temp += "II";
            if (n % 3 == 0)
                temp += "III";
        }
        else if (n / 100 == 0)
        {
            if (n / 50)
            {
                n -= 50;
                temp += num2rom(50);
            }
            if ((n / 10) % 3 == 1)
                temp += "X";
            if ((n / 10) % 3 == 2)
                temp += "XX";
            if ((n / 10) % 3 == 0)
                temp += "XXX";
        }
        else if (n / 1000 == 0)
        {
            if (n / 500)
            {
                n -= 500;
                temp += num2rom(500);
            }
            if ((n / 100) % 3 == 1)
                temp += "C";
            if ((n / 100) % 3 == 2)
                temp += "CC";
            if ((n / 100) % 3 == 0)
                temp += "CCC";
        }
        else if (n / 10000 == 0)
            for (int i = 1; i <= (n / 1000); i++)
                temp += "M";
    }
    return temp;
}

int main(void)
{
    roma['I'] = 1;
    roma['V'] = 5;
    roma['X'] = 10;
    roma['L'] = 50;
    roma['C'] = 100;
    roma['D'] = 500;
    roma['M'] = 1000;

    string s1, s2;
    cin >> s1 >> s2;
    int num = rom2num(s1) + rom2num(s2);
    cout << num << endl;

    string res;
    int ten = 10;

    while (num != 0)
    {
        res.insert(0, num2rom(num % ten));
        num -= num % ten;
        ten *= 10;
    }
    cout << res << endl;
}

/*
CXIV
CV
219
CCXIX

IV
V
9
IX
*/
