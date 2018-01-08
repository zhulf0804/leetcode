class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.empty()) return 0;
        int ans = nums.size();
        
        for(auto iter=nums.begin(); iter!=nums.end(); ){
            
            if(iter+1 != nums.end()){
                if(*iter == *(iter+1)){
                    iter = nums.erase(iter);
                    ans--;
                }else iter++;
            }
            if(iter+1 == nums.end()) iter++;   //此处是陷阱
        }
        
        
        return ans;
    }
};
