class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=0;
        for(int k=0;k<n+m;k++){
            if (nums1[k]==0 && i<n){
                nums1[k]=nums2[i];
                i++;
            }
            
        }
        sort(nums1.begin(),nums1.end());
        
    }
};