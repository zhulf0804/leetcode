class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans="";
        if(strs.empty()) return ans;
        
        vector<string>::iterator iter;
        
        string first = strs.front();
        string str;
        int len = first.length();
        int len0;
        for(int i=0; i<len; i++){
            for(iter=strs.begin(); iter!=strs.end(); iter++){
                str = *iter;
                len0 = str.length();
                if(i>=len0 || str[i]!=first[i]){
                    return ans;
                }
            }
            ans.push_back(first[i]);
        }
        
        return ans;
    }
};
