class Solution {
public:
    bool isAnagram(string s, string t) {
    vector<int> nums(26);
    for(char ch:s){
        nums[ch-'a']++;
    }

    for(char ch:t){
        nums[ch-'a']--;
    }

    for(int i=0;i<nums.size();i++){
        if(nums[i]!=0) return false;
    }

    return true;
    }
};
