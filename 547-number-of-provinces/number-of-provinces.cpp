class Solution {
public:
void bfs(int start,vector<vector<int>>& isConnected,vector<bool>& visited){
    queue<int> q;
    int n=isConnected.size();
    visited[start]=true;
    q.push(start);
    while(!q.empty()){
         int node=q.front();
        q.pop();
    for(int i=0;i<n;i++){
       
        if (isConnected[node][i]==1 && visited[i]==false){
            visited[i]=true;
            q.push(i);
        }
    }

}
}
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size();
        int provinces=0;
        vector<bool> visited(n,false);
        for(int i=0;i<n;i++){
            if (!visited[i]){
                bfs(i,isConnected,visited);
                provinces++;

            }
        }
return provinces;
    }
};