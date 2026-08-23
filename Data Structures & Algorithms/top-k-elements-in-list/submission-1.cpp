class Solution {
   public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mpp;
        vector<int> ans;
        for (int i = 0; i < nums.size(); i++) {
            mpp[nums[i]]++;
        }
        vector<pair<int, int>> pr(mpp.begin(), mpp.end());
        sort(pr.begin(), pr.end(),
            [](pair<int,int>&a,pair<int,int>&b){
                return a.second > b.second; });
        for (auto it = pr.begin(); it != pr.begin()+k; ++it) {
            ans.push_back(it->first);
        }

        return ans;
    }
};
