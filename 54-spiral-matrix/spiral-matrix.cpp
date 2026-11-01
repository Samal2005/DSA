class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& nums) {
        vector<int> v;
        int m=nums.size();
        int n=nums[0].size();
        int l=0;
        int t=0;
        int r=n-1;
        int b=m-1;
        while(t<=b && l<=r){
            for(int i=l;i<=r;i++){
                v.push_back(nums[t][i]);
            }
            t++;
            for(int i=t;i<=b;i++){
                v.push_back(nums[i][r]);
            }
            r--;
            if(t<=b){
                for(int i=r;i>=l;i--){
                    v.push_back(nums[b][i]);
                }
                b--;
            }
            if(l<=r){
                for(int i=b;i>=t;i--){
                    v.push_back(nums[i][l]);
                }
                l++;
            }
        }           
return v;
        }        
};