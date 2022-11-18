#include <iostream>
#include <vector>
#include <algorithm>
#include <assert.h>

using namespace std;

int findClosestNumber(vector<int> &nums)
{
    sort(nums.begin(), nums.end());
    int close = INT_MAX, ans;

    for(int i = 0; i < nums.size(); ++i)
    {
        if(abs(nums[i]) <= close)
        {
            close = abs(nums[i]);
            ans = nums[i];
        }
    }
    return ans;
}


int main()
{
    vector<int> nums = {-4, -2, 1, 4, 8};
    assert(findClosestNumber(nums)==1);

    nums = {-2, -1, 1};
    assert(findClosestNumber(nums)==1);

    nums = {0, -1, 1, -2, 2};
    assert(findClosestNumber(nums)==0);

    return 0;
}