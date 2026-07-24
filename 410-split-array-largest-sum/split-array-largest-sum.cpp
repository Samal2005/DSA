class Solution {
bool ok(int mid,vector<int>& nums,int k){
    int sum=0;
    int c=1;
    for(int x:nums){
        if(sum+x<=mid){
            sum+=x;
        }
        else{
            c++;
            sum=x;
        }
    }
    return c<=k;

}
public:
    int splitArray(vector<int>& nums, int k) {
        int l=*max_element(nums.begin(),nums.end());
        int r=0;
        int ans=0;
        for(auto i:nums){
            r+=i;
        }
        while(l<=r){
            int mid=(l+r)/2;
            if(ok(mid,nums,k)){
                ans=mid;
                r=mid-1;
            }
            else{
                l=mid+1;
            }
        }

    return ans;    
    }
};