class Solution {
    bool ok(int m,int days,vector<int>& w){
        int d=1;
        long long sum=0;
        for(auto x:w){
            if(sum+x>m){
                sum=x;
                d++;
            }
            else{
                sum+=x;
            }
        }
        return d<=days;
    }
public:
    int shipWithinDays(vector<int>& w, int days) {
        int l=*max_element(w.begin(),w.end());
        int r=0;
        for(auto i:w){
            r+=i;
        }
        int ans=-1;
        while(l<=r){
            int m=(l+r)/2;
            if(ok(m,days,w)){
                ans=m;
                r=m-1;
            }
            else{
                l=m+1;
            }
        }
        return ans;
        
    }
};