class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int n=nums.size();
        vector<int>suffixMax(n,0);
        suffixMax[n-1]=nums[n-1];
        for(int i=n-2;i>=0;i--){
            suffixMax[i]=max(nums[i],suffixMax[i+1]);
        }

        int ans=-1;
        for(int i=0;i<n-1;i++){
           if(suffixMax[i+1]>nums[i]){
              ans=max(ans,suffixMax[i+1]-nums[i]);
           }
        }
        return ans;
    }
}; 