class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.length();
        if(n==0)
            return 0;
        int l=0, maxlength=0;
        unordered_set<int> set;
        for(int r=0; r<n; r++){
            if(set.find(s[r])==set.end())
            {
                set.emplace(s[r]);
                maxlength=max(maxlength, r-l+1);
            }
            else{
                while(set.find(s[r])!=set.end())
                    set.erase(s[l++]);
                set.emplace(s[r]);
            }
        }
        return maxlength;
    }
};