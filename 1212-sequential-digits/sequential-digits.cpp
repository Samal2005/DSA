class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        string s="123456789";
        vector<int> ans;
        for(int i=2;i<=9;i++){
            for(int j=0;j+i<=s.size();j++){
                int x=stoi(s.substr(j,i));
                if(x>=low && x<=high){
                    ans.push_back(x);
                }


            }
        }


      return ans;  
    }
};