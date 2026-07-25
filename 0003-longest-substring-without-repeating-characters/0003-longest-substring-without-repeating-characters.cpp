class Solution {
public:
    int lengthOfLongestSubstring(string s) {
         int start=0;
         int end=0;
         int n=s.size();
         int ans=0;
         bool freq[256]={0};
         while(end<n)
         {
            while(freq[s[end]]) //jab character repeate honge tab chalega
            {
                freq[s[start]]=0;
                start++;
            }
            freq[s[end]]=1;
            end++;
            ans=max(ans,end-start);
         }
         return ans;
    }
};