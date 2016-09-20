/*
    （Time Limit Exceeded）
    先排序，再从左右两端向内夹逼，排序O(nlogn)，查找O(n)，总复杂度O(nlogn)
*/

class Solution {
    public:
        vector<int> twoSum(vector<int> &nums, int target) {
            // 存储最终结果
            vector<int> res;
            
            // 定义有序向量
            vector<int> sorted_nums;
            
            // 存储有序元素集
            sorted_nums = nums;
            sort(sorted_nums.begin(),sorted_nums.end());
            
            // 定义左右端点，分别向内夹逼
            int left = 0,right = nums.size() -1;
            while(left < right)
            {
                // 找到解
                if(sorted_nums[left] + sorted_nums[right] == target)
                {
                    // 将有序集与原元素集的下标对应起来
                    for(int i = 0;i <= nums.size() -1;i++)
                    {
                        if(sorted_nums[left] == nums[i])
                            res.push_back(i);
                        break;
                    }
                    for(int i = nums.size() -1;i >= 0;i--)
                    {
                        if(sorted_nums[right] == nums[i])
                            res.push_back(i);
                        break;
                    }
                }
                
                // 小于目标值则左端点右移
                else if(sorted_nums[left] + sorted_nums[right] < target)
                    left++;
                
                // 大于目标值则右端点左移
                else 
                    right--;
            }
            return res;
        }
};
