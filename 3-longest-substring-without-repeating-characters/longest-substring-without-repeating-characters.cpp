class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=0;
        map<char,int> mp;
        int maxlen=0;
        for(int i=0;i<s.size();i++){
         
            if(mp.count(s[i]) && mp[s[i]]>=l){
                l=mp[s[i]]+1;
            }
            mp[s[i]]=i;
            maxlen=max(maxlen,i-l+1);







            
        }
        return maxlen;
        
    }
};