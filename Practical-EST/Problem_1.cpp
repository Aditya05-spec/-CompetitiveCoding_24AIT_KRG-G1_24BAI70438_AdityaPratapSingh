class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        int len = 0;
        int maxLen = 0;
        
        int left = 0;
        int right = 0;
        int n = s.length();
        if(n == 0) {
            return 0;
        }

        if(n == 1) {
            return 1;
        }
        
        //we can fill the entire array with any element with this
        int hash[256];
        fill(hash, hash + 256, -1);

        //Creating a constant window soo that we can avoid Repeating characters
        while(right < n) {
            if(hash[s[right]] != -1) {
                if(hash[s[right]] >= left) {
                    left = hash[s[right]] + 1;
                }
            }

            len = right-left+1;
            maxLen = max(maxLen , len);
            hash[s[right]] = right;
            right++;
        }

        return maxLen;
    }
};