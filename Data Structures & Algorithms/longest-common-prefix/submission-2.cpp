class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int ssma=strs[0].size();
        string smal=strs[0];
        for(int i=1;i<strs.size();i++){
            if(strs[i].size()<ssma){
                ssma=strs[i].size();
                smal=strs[i];
            }
        }

        string temp="";
        for(int i=0;i<ssma;i++){
            for(int j=0;j<strs.size();j++){
                if(smal[i]!=strs[j][i]){
                    return temp;
                }
            }
            temp.push_back(smal[i]);
        }

        return smal;
    }
};