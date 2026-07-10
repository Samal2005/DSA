class Solution {
public:
void dfs(int start,vector<vector<int>>& isConnected,vector<bool>& visited){
    visited[start]=true;
    int n=isConnected.size();
    for(int i=0;i<n;i++){
        if (isConnected[start][i]==1 && visited[i]==false){
            dfs(i,isConnected,visited);
        }

    }
}
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size();
        vector<bool> visited(n,false);
        int provinces=0;
        for(int i=0;i<n;i++){
            if (!visited[i]){
                dfs(i,isConnected,visited);
                provinces++;
            }
        }
    return provinces;
    }
};