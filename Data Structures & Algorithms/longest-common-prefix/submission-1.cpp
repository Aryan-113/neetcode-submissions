class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        int mini=strs[0].size();
        string minstr=strs[0];
        for(int i=1;i<strs.size();i++){
            if(strs[i].size()<mini){
                mini=strs[i].size();
                minstr=strs[i];
            }
        }

        for(int i=0;i<minstr.size();i++){
            char ch=minstr[i];
            for(int j=0;j<strs.size();j++){
                if(i>0&&strs[j][i]!=ch){
                    return minstr.substr(0,i);
                }
                if(i==0&&strs[j][i]!=ch){
                    return "";
                }
            }
        }
        return minstr;
    }
};