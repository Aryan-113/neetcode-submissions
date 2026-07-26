class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ans=nums[0];
        int count=1;
        int s=1;

        while(s<nums.size()){
            if(nums[s]!=ans){
                count--;
            }
            else{
                count++;
            }
            if(count<0){
                ans=nums[s];
            }
            s++;
        }

        return ans;
    }
};