class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        map<int,int> mp;int l=0;
        int n=fruits.size();
        int maxi=0;
        for(int i=0;i<n;i++){
            mp[fruits[i]]++;
            while(mp.size()>2){
                mp[fruits[l]]--;
                if(mp[fruits[l]]==0){
                    mp.erase(fruits[l]);
                }
                l++;
            }
            maxi=max(maxi,i-l+1);
        }
return maxi;
        
    }
};