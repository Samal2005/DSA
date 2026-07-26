class Solution {
public:
    bool isValid(string word) {
        if(word.size()<3) return false;
        bool v=false;
        bool co=false;
        for(int i=0;i<word.size();i++){
            if(!isalnum(word[i])){
                return false;
            }
            else if(isalpha(word[i])) {
                char c=tolower(word[i]);
                if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u'){
                v=true;}
                else{co=true;}
            }

        }
        return v&&co;
    }
};