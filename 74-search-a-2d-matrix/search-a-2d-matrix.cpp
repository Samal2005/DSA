class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int l=0;
        int r=(matrix.size()*matrix[0].size())-1;
        int c=matrix[0].size();
        while(l<=r){
            int mid=l+(r-l)/2;
            if (target==matrix[mid/c][mid%c]){
                return true;
            }
            else if (target<matrix[mid/c][mid%c]){
                r=mid-1;
            }
            else{
                l=mid+1;
            }

        }
        return false;
        
    }
};