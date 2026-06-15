class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        vector<int>leftMaxi(n,0);
        vector<int>rightMaxi(n,0);

        int maxiL = height[0];

        int waterCount = 0;

        for(int i=1;i<n;i++){
           leftMaxi[i] = maxiL;
           maxiL = max(maxiL,height[i]);
        }
        int maxiR = height[n-1];
        for(int i=n-2;i>=0;i--){
            rightMaxi[i] = maxiR;
            maxiR = max(maxiR, height[i]);

        }
   for(int i=0;i<n;i++){
    waterCount += max((min(leftMaxi[i], rightMaxi[i]) - height[i]),0);
   }
    return waterCount;
        
    }
};
