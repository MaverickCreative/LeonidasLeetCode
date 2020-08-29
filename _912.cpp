// Sort an array recursively

class Solution {
    void Store(vector<int>&nums, int ele)
    {
        if(nums.size()==0 || nums[nums.size()-1]<=ele)
        {
            nums.push_back(ele);
            return;
        }
        int val = nums[nums.size()-1];
        nums.pop_back();
        Store(nums,ele);
        nums.push_back(val);
    }
    void sorter(vector<int>&nums)
    {
        if(nums.size()==1)
        {
            return;
        }
        int temp = nums[nums.size()-1];
        nums.pop_back();
        sorter(nums);
        Store(nums, temp);
    }
public:
    vector<int> sortArray(vector<int>& nums) {
        sorter(nums);
        return nums;
    }
};