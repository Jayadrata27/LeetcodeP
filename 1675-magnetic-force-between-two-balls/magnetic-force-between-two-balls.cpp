class Solution {
public:
bool isMagnetPossible(int minDistance,vector<int>& position, int m){
    int n=position.size();
    int count=1,busketPosition=position[0];
    for(int i=1;i<n;i++){
        if(position[i]-busketPosition>=minDistance){
            count++;
            busketPosition=position[i];
        }
    }
    return count>=m;
}
    int maxDistance(vector<int>& position, int m) {
        int n=position.size();
        sort(position.begin(),position.end());
        int start=1,end=position[n-1]-position[0],ans;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(isMagnetPossible(mid,position,m)){
                ans=mid;
                start=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        return ans;
    }
};