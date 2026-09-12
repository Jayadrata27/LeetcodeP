class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
       
        vector<int>pos;
        vector<int>neg;

        for(int i=0;i<nums.size();i++){
            if(nums[i]>=0){  
                pos.push_back(nums[i]);
            }
            else{
                neg.push_back(nums[i]);
            }
        }
        // case1 
        if(neg.size()==0){    //means negative 0 , all element are positive
           for(int i=0;i<pos.size();i++){
              pos[i]=pos[i]*pos[i];
           }
           return pos;
        }
        // case2
        if(pos.size()==0){   //means positive 0 , all are negative
          for(int i=0;i<neg.size();i++){
             neg[i]=neg[i]*neg[i];
          }
          reverse(neg.begin(),neg.end());
          return neg;
        }
        // case 3    if positive and negative both element are present
        int i=0,j=0,id=0;
        int n=neg.size();
        int m=pos.size();
        vector<int>res(n+m);

        for(int i=0;i<m;i++){
            pos[i]=pos[i]*pos[i];
        }
        for(int i=0;i<n;i++){
            neg[i]=neg[i]*neg[i];
        }
        reverse(neg.begin(),neg.end());
        
        while(i<n && j<m){
            if(neg[i]<=pos[j]){
                res[id]=neg[i];
                id++;
                i++;
            }
            else{
                res[id]=pos[j];
                id++;
                j++;
            }
        }
        while(i<n){
            res[id]=neg[i];
            id++;
            i++;
        }
        while(j<m){
            res[id]=pos[j];
            id++;
            j++;
        }
        return res;
    }
};