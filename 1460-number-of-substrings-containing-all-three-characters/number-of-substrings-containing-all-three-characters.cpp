class Solution {
public:
    int numberOfSubstrings(string s) {
        int n=s.size();
        int count=0;
        int lastsee[3]={-1,-1,-1};
        for(int i=0;i<n;i++){
            lastsee[s[i]-'a']=i;            
            count+=1+min(lastsee[0],min(lastsee[1],lastsee[2]));
        }
        return count;
        
    }
};