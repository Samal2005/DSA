class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int ans=0;
        int n=cardPoints.size();

        for(int i=0;i<k;i++){
            ans+=cardPoints[i];
        }
        int maxe=ans;
        for(int j=0;j<k;j++){
            ans=ans-cardPoints[k-1-j]+cardPoints[n-1-j];
            maxe=max(maxe,ans);


        }
return maxe;
        
    }
};