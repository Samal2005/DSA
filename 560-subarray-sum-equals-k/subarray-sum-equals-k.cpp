class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int c=0;
        int sum=0;
        map<int,int> mp;
        mp[0]=1;
        
        for(int i=0;i<nums.size();i++){
            sum=sum+nums[i];
            if (mp.count(sum-k)){
                c+=mp[sum-k];
            }
            mp[sum]++;

           
        }
        return c;

        
    }
};