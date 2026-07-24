class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
       
       int l=matrix.size();
        int r=matrix[0].size();
        int t=0;
        int b=r-1;
        while(t<l && b>=0){
            int k=matrix[t][b];
            if(k==target)return 1;
            else if(target>k){
                t++;
            }
            else{
                b--;
            }
        }
        return 0;
        
        
    }
};