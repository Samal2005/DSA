class Solution {
public:
    string frequencySort(string s) {
        map<char,int> mp;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;            
        }
        vector<pair<int,char>>v;
        for(auto i:mp){
            v.push_back({i.second,i.first});
        }
        sort(v.rbegin(),v.rend());
        string t="";
        for(auto i:v){
            while(i.first!=0){
                t+=i.second;
                i.first--;
            }

        
        }
        return t;


        
    }
};