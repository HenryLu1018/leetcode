/* 
* 使用hashmap，时空复杂度均为O(n)
*/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // 存储最终结果
        vector<int> res;
        
        // 边值条件判断（元素个数不超过1时返回空解）
        if(nums.size() <= 1)
            return res;
        
        // 定义无序hashmap
        unordered_map<int,int> map;
        
        // 将数组中各元素存入hashmap中
        for(int i = 0;i <= nums.size() - 1;i++)
            map[nums[i]] = i;
        
        // 查找遍历整个hashmap
        for(int i = 0;i <= nums.size() - 1;i++)
        {   
            int rest = target - nums[i];
            
            // 判断元素rest在hashmap中是否存在
            if(map.count(rest) && map[rest] > i) // map.count(rest)等价于map.find(rest) != map.end()，且需要考虑大小顺序
            {
                // 添加元素时小的在前，大的在后；同时注意0下标
                res.push_back(i);
                res.push_back(map[rest]);
                
                // 题目中明确指出有且仅有一个解，故只要找到符合条件的两个数，就跳出循环终止程序
                break;
            }
        }
        return res;
    }
};
