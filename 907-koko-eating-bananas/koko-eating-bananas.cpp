class Solution {
public:
bool ok(vector<int>& piles,int mid, int h){
    long long sum=0;
    for(auto it:piles){
        sum+=(it+mid-1)/mid;
    }
    return sum<=h;
}
    int minEatingSpeed(vector<int>& piles, int h) {
       int low=1;
       int high=*max_element(piles.begin(),piles.end());
       int ans=0;
       while(low<=high){
            int mid=(low+high)/2;
            if (ok(piles,mid,h)){
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