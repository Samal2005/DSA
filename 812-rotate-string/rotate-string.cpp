class Solution {
public:
    bool rotateString(string s, string goal) {
        string ans=s+s;
        if(ans.find(goal)!=string::npos && s.size()==goal.size() ){
            return true;
        }
        else{
            return false;
        }
        
    }
};