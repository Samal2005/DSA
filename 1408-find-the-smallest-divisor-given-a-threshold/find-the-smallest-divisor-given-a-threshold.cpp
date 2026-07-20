class Solution {
public:
bool ok(vector<int>& piles,int mid, int h){
    long long sum=0;
    for(auto it:piles){
        sum+=(it+mid-1)/mid;
    }
    return sum<=h;
}
    int smallestDivisor(vector<int>& nums, int h) {
        int low=1;
       int high=*max_element(nums.begin(),nums.end());
       int ans=0;
       while(low<=high){
            int mid=(low+high)/2;
            if (ok(nums,mid,h)){
                ans=mid;
                high=mid-1;             
            }
            else{
                low=mid+1;
            }
       }
       return ans;  
        
    }
};