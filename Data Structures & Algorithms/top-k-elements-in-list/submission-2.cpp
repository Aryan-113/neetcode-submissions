class Solution {
   public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int, int> mpp;
        for (int i = 0; i < nums.size(); i++) {
            mpp[nums[i]]++;
        }

        vector<vector<int>> bucket(n+1);
        for(auto it:mpp){
            bucket[it.second].push_back(it.first);
        }

        //walking throught the bucket
        vector<int> ans;
        for(int i=n;i>=1&&ans.size()<k;i--){
            for(int num:bucket[i]){
                ans.push_back(num);
            }
        }

        return ans;
    }
};
