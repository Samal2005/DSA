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
            int k=i.first;
            while(k--){
                t+=i.second;
            }

        
        }
        return t;


        
    }
};