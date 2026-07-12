class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        sort(strs.begin(),strs.end());
        int n=strs.size()-1;
        string ans="";
        for(int i=0;i<strs[0].size();i++){
            if (strs[0][i]==strs[n][i]){
                ans+=strs[0][i];
            }
            else{
                break;
            }

        }
        if (ans!=""){
            return ans;
        }
        else{ return ans;}

    }
};