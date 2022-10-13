#include <iostream>
#include <vector>
using namespace std;

/*
Subset
Given an integer array nums of unique elements, return all possible subsets (the power set).
The solution set must not contain duplicate subsets. Return the solution in any order.

Example 1:
Input: nums = [1,2,3]
Output: [[],[1],[2],[1,2],[3],[1,3],[2,3],[1,2,3]]

Example 2:
Input: nums = [0]
Output: [[],[0]]
*/

vector<vector<int>> subsets(vector<int> &nums)
{
    vector<vector<int>> res;
    vector<int> sub;
    subset(nums, 0, sub, res);
    return res;
}

void subset(vector<int> &nums, int i, vector<int> &sub, vector<vector<int>> &res)
{
    res.push_back(sub);
    for (int j = i; j < nums.size(); j++)
    {
        sub.push_back(nums[j]);
        subset(nums, j + 1, sub, res);
        sub.pop_back();
    }
}
