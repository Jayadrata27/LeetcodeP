class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int start=0,end=n-1;
        while(start<=end){
            int mid=start+(end-start)/2;

            if(nums[mid]==target){
                return mid;
            }

        //    Sorted from left side
            if(nums[mid]>=nums[0]){
               if(nums[0]<=target && target<nums[mid]){
                  end=mid-1;
               }
               else{
                  start=mid+1;
               }
            }
        //  sorted from right side
            else{
                if(nums[mid]<target && target<=nums[end]){
                    start=mid+1;
                }
                else{
                    end=mid-1;
                }
            }
        }
        return -1;
    }
};