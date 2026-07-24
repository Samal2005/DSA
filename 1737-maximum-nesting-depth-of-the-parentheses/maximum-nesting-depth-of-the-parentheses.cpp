class Solution {
public:
    int maxDepth(string s) {
        int d=0;
        int maxd=0;
        for(auto i:s){
            if(i=='('){
                d++;
            }
            else if(i==')') d--;
            maxd=max(maxd,d);
        }

    return maxd;   
    }
};