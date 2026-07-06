class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();

        int ans=0;
        for(int i=0;i<n;i++){
            ans+=nums[i];
        }
        int sum=(n*(n+1))/2;

        int result=sum-ans;

        return result;
    }
};
