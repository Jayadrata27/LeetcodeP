class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int rowSize=matrix.size(),colSize=matrix[0].size();
        // tarnspose the matrix
        for(int i=0;i<rowSize-1;i++){
            for(int j=i+1;j<colSize;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        int colStart=0,colEnd=matrix[0].size()-1;
        while(colStart<=colEnd){
            for(int i=0;i<rowSize;i++){
                swap(matrix[i][colStart],matrix[i][colEnd]);
            }
            colStart++,colEnd--;
        }
    }
};