class Solution {
public:
    int trap(vector<int>& height) {
       int n=height.size();
       vector<int>rightMax(n,0);
       int leftMax=height[0];
        // SuffixMax cal
        rightMax[n-1]=height[n-1];
        for(int i=n-2;i>=0;i--){
            rightMax[i]=max(rightMax[i+1],height[i]);
        }
        // Water Cal
        int totalWaterCal=0;
        for(int i=1;i<n-1;i++){
            int minLeftRight=min(leftMax,rightMax[i+1]);
            if(minLeftRight>height[i]){
                totalWaterCal+=minLeftRight-height[i];
            }
            leftMax=max(leftMax,height[i]);
        }
        return totalWaterCal;

    }
};