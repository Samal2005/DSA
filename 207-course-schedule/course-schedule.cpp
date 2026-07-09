class Solution {
public:
    bool canFinish(int n, vector<vector<int>>& prerequisites) {
        vector<vector<int>>adj(n);
        vector<int>ind(n,0);
        for(auto i:prerequisites){
            int a=i[0];
            int b=i[1];
            adj[b].push_back(a);
            ind[a]++;
        }
        queue<int>q;
        for(int i=0;i<n;i++){
            if(ind[i]==0)q.push(i);
        }
       
        vector<int>ans;
        while(!q.empty()){
            int f=q.front();
            ans.push_back(f);
            q.pop();
            for(auto k:adj[f]){
                ind[k]--;
                if(ind[k]==0){
                    q.push(k);
                    
                }
            }

        }
        int c=ans.size();
        if(c<n)return 0;
        else{
            return 1;
        }
    }
};