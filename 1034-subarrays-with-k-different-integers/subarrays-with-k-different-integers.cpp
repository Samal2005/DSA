class Solution {
    int a(vector<int>& nums, int k){
        map<int,int>mp;
    int r=0;
        int l=0;
        int n=nums.size();
        int ans=1;
        while(r<n){
                mp[nums[r]]++;
            while(mp.size()>k){
                mp[nums[l]]--;
                if(mp[nums[l]]==0)mp.erase(nums[l]);
                l++;



            }
               ans+=(r-l+1);
        
    
     
        r++;
}

return ans;
}
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
     return  a(nums,k)-a(nums,k-1);
        
        
    }
};