//vector的使用

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int len = nums.size();
        vector<int>::iterator iter;
        int ans = 0, i = 0;
        for(iter=nums.begin(); iter!=nums.end(); ){
            if(val == *iter){
                nums.erase(iter);
            }else{
                iter++;
                ans++;
            }
           
        }
        return ans;
    }
};
