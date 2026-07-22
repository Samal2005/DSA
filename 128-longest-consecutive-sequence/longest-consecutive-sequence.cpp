class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int>s;
        int ans=0;
        s.insert(nums.begin(),nums.end());
        for(auto i:s){
            if(!s.count(i-1)){
                int curr=i;
                int len=1;
                while(s.count(curr+1)){
                    curr++;
                    len++;
                }
                ans=max(ans,len);

            }
        }
        return ans;
        
    }
};