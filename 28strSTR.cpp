class Solution {
public:
    int strStr(string haystack, string needle) {
        int j, index, len1 = haystack.length(), len2 = needle.length();
        for(index=0; index<=len1-len2; index++){
            for(j=0; j<len2; j++){
                if(index+j>=len1) return -1;
                if(haystack[index+j] != needle[j]){
                    break;
                }
            }
            if(j == len2) return index;
        }
        
        return -1;
    }
};
