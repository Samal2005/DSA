class Solution {
public:
    
    int orangesRotting(vector<vector<int>>& grid) {
        int n=grid.size();
          int m=grid[0].size();
          int fr=0;
        queue<pair<int,int>> q;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1)fr++;
                else if(grid[i][j]==2)q.push({i,j});
            }
        }
        int time=0;
        if(fr==0)return 0;

      
        while(!q.empty()){
       int sz=q.size();
        for(int j=0;j<sz;j++){
             auto f=q.front();
        q.pop();
      
        int r=f.first;
        int c=f.second;
        int dr[]={0,1,0,-1};
        int dc[]={1,0,-1,0};
        for(int i=0;i<4;i++){
            int nr=r+dr[i];
            int nc=c+dc[i];
            if(nr>=0 && nr<n && nc<m && nc>=0 && grid[nr][nc]==1){
                grid[nr][nc]=2;
                q.push({nr,nc});
                fr--;
            }
            
        }
        
        }
        time++;
        }  
        if(fr>0)return -1;
        else {
            return time-1;
        }

    }
};