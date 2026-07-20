class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int m=grid.size();
        int n=grid[0].size();
        k %= (m * n);
        
        for(int a=0;a<k;a++){
            vector<vector<int>>v=grid;
            for(int i=0;i<m;i++){
                for(int j=0;j<n;j++){
                    if(i==m-1 && j==n-1){
                        v[0][0]=grid[i][j];
                    }
                    else if (j==n-1){
                        v[i+1][0]=grid[i][j];
                    }
                    else{
                        v[i][j+1]=grid[i][j];
                    }
                }
            }
            grid=v;
        }
       
        return grid;
        
    }
};