class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        vector<int> v(n,0);
        vector<vector<int>> x=matrix;
        for(int i=0;i<m;i++){//row
        
            for(int j=0;j<n;j++){//column
                if (matrix[i][j]==0){
                    x[i]=v;
                    for(int l=0;l<m;l++){
                        x[l][j]=0;
                    }

                }

            }
        }
        matrix=x;
        
    }
};