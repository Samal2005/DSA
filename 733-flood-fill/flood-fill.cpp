class Solution {
public:
void bfs(int sr,int sc,int color,vector<vector<int>>& image){
    vector<int> nc={1,0,-1,0};
    vector<int> nr={0,-1,0,1};
    int ans=image[sr][sc];
    int n=image.size();
    int m=image[0].size();
    image[sr][sc]=color;
    queue<pair<int,int>> q;
    q.push({sr,sc});
    while(!q.empty()){
        auto node=q.front();
        q.pop();
            for(int k=0;k<4;k++){
                int dr=node.first+nr[k];
                int dc=node.second+nc[k];
                if(dr<n && dc<m && dr>=0 && dc>=0 && image[dr][dc]==ans){
                    image[dr][dc]=color;
                    q.push({dr,dc});
                            }
                        }
}
}   
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        if (image[sr][sc]==color){ return image;}
        bfs(sr,sc,color,image);
        return image;
       
    }
};