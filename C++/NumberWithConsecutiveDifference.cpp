#include <bits/stdc++.h>
using namespace std;

/*
* https://leetcode.com/problems/numbers-with-same-consecutive-differences/
*  Return all non-negative integers of length n such that the absolute difference between every two consecutive digits is k.
! Note that every number in the answer must not have leading zeros.
For example, 01 has one leading zero and is invalid.
You may return the answer in any order.

Example 1:
Input: n = 3, k = 7
Output: [181,292,707,818,929]
Explanation: Note that 070 is not a valid number, because it has leading zeroes.

Example 2:
Input: n = 2, k = 1
Output: [10,12,21,23,32,34,43,45,54,56,65,67,76,78,87,89,98]
 */

class Solution
{
public:
    vector<int> ans;

    void solve(int len, int &k, int num, int digit)
    {
        if (len == 0)
        {
            ans.push_back(num);
            return;
        }

        // Next digits will have range from 0 to 9
        for (int i = 0; i < 10; i++)
            if (abs(i - digit) == k)
                solve(len - 1, k, num * 10 + i, i);
    }

    vector<int> numsSameConsecDiff(int n, int k)
    {
        for (int i = 1; i <= 9; i++)
            solve(n - 1, k, i, i);

        return ans;
    }
};
