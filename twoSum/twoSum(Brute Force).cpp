/* 暴力搜索Brute Force，时间复杂度O(n^2)，空间复杂度O(1) */

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i,j; // k = 0;
        // int p[100]; (不要用数组！)
        vector<int> p;
        for (i = 0;i <= nums.size() - 1;i++) // length(nums) - 1 (不要用数组！)
            for (j = i + 1;j <= nums.size() - 1;j++) 
                if (nums[i] + nums[j] == target) 
                { 
                    // p[k] = i;p[k + 1] = j; (不要用数组！)
                    p.push_back(i);p.push_back(j); // zero-based indices
                }
/*      if (p.size())
            return p;
        else
        {
            cout<<"No solution!"<<endl; // cout<<p<<endl;（不要用cout！）
            // return false
        } 
*/
        return p;
    }
};
