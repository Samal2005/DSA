class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        
        vector<int> ans1;
        vector<int> ans2;
        vector<int> ans;

        for(int i=0;i<nums.size();i++){
            if (nums[i]<0){
                ans1.push_back(nums[i]);//negative
            }
            else{
                ans2.push_back(nums[i]);//positive
            }
        }
        int i=0,j=0;
        for(int k=0;k<nums.size();k++){
            if (k%2==0){
                ans.push_back(ans2[i]);
                i++;
            }
            else{
                ans.push_back(ans1[j]);
                j++;
            }

        }
        return ans;


    }
};