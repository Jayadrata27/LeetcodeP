#define ll long long
class Solution {
public:
    bool isCocoEatingBanana(int maxSpeed,vector<int>& piles, int h){
        int n=piles.size();
        int totalTime=0;
        for(int i=0;i<n;i++){
            totalTime+=piles[i]/maxSpeed;

            if(piles[i]%maxSpeed){
                totalTime++;
            }
        }
        return totalTime<=h;
    };
    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size();
        ll int start=1,end=0,ans;
        for(int i=0;i<n;i++){
            end+=piles[i];
        }
        while(start<=end){
            ll int mid=start+(end-start)/2;

            if(isCocoEatingBanana(mid,piles,h)){
                ans=mid;
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
        return ans;
    }
};