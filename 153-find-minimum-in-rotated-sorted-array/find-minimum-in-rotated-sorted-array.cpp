class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size();
        int start=0,end=n-1,ans;

        if(nums[0]<nums[n-1]){
            return nums[0];
        }
        if(n==1){
          return nums[0];
        }

        while(start<=end){
            int mid=start+(end-start)/2;

            //if element in left portion go to right side
            if(nums[0]<=nums[mid]){
                start=mid+1;
            }
            // if element in right portion go to left side , and store the mid
            else{
                ans=nums[mid];
                end=mid-1;
            }
        }
        return ans;
    }
};