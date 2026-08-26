class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>ans(nums.size());
        int prod=1;
        int zero_count=0;

        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                prod=prod*nums[i];
            }
            else{
                zero_count++;
            }
        }

        for(int i=0;i<nums.size();i++){
            if(zero_count>1){
                ans[i]=0;
            }
            else if(zero_count==1){
                if(nums[i]==0){
                    ans[i]=prod;
                }
                else ans[i]=0;
            }
            else{
                ans[i]=prod/nums[i];
            }
        }

        return ans;
    }
};
