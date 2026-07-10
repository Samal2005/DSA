class Solution {
public:  
    int orangesRotting(vector<vector<int>>& grid) {
        int time=0;
        int n=grid.size();//rows
        int m=grid[0].size();//columns
        queue<pair<int,int>> q;
        int fresh=0;
        for (int i=0;i<n;i++){//rows
            for(int j=0;j<m;j++){//columns
                if (grid[i][j]==1) fresh++;
                else if (grid[i][j]==2) q.push({i,j});          
            }
        }
        if (fresh==0 && q.empty()){
            return 0;
        }
        vector<int> nc={1,0,-1,0};
        vector<int> nr={0,-1,0,1};
        while(!q.empty()){
            int s=q.size();
            
            for(int i=0;i<s;i++){
                auto node=q.front();
                q.pop();
            for(int j=0;j<4;j++){
                int dr=node.first +nr[j];
                int dc=node.second +nc[j];
                if (dr<n && dc<m && dr>=0 && dc>=0 && grid[dr][dc]==1){
                    grid[dr][dc]=2;
                    q.push({dr,dc});
                    fresh--;
                }
            }
            
        }
        time++;

        }
        if (fresh!=0){
            return -1;
        }
        else{
            return time-1;
        }
    }

};