class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int x=0,y=0;
        for(int i=0;i<n;i++){
            x=x^nums[i];
        }
        for(int j=1;j<=n;j++){
           y=y^j;
        }
        return x^y;
    }
};