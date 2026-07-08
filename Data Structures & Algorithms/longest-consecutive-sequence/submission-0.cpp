class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st;
        for(int i=0;i<nums.size();i++){
            st.insert(nums[i]);
        }

        int maxcount=0;
        for(int i=0;i<nums.size();i++){
            int count=1;
            if(st.find(nums[i]-1)==st.end()){
                int j=nums[i];
                while(st.find(j+1)!=st.end()){
                    count++;
                    j++;
                }
            }
            maxcount=max(maxcount,count);
        }

        return maxcount;
    }
};
