class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int n=arr.size();
        int missingNumber=k;
        for(int i=0;i<n;i++){
            if(arr[i]>missingNumber){
                return missingNumber;
            }
            else{
                missingNumber++;
            }
        }
        return missingNumber;
    }
};