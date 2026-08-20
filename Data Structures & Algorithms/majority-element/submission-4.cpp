class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> ans;
        for(int i=0;i<nums.size();i++){
            ans[nums[i]]++;
            if(ans[nums[i]]>nums.size()/2) return nums[i];
        }
        return 0;
    }
};