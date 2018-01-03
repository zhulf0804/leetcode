class Solution {
public:
    bool isValid(string s) {
        stack<char> left;
	
        int len = s.length();
        for(int i=0; i<len; i++){
            if(s[i]=='(' || s[i]=='[' || s[i]=='{'){
                left.push(s[i]);
                continue;
            }
            if(!left.empty()){
                if((s[i]==')'&&left.top()=='(')||(s[i]=='}'&&left.top()=='{')||(s[i]==']'&&left.top()=='[')){
                    left.pop();
                    continue;
                }else{
                   
                    return false;
                }
            }else{
                
                return false;
            }
        }

        if(left.empty()) return true;
        else return false;
    } 
};
