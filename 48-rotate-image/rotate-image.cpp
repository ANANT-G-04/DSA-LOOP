class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
       //transpose
       int n=matrix.size();
       for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            swap(matrix[i][j],matrix[j][i]);
        }
       }
        //reverse columns
        for(int i=0;i<n;i++){
            int str=0;
            int end=n-1;
            int row=i;
            while(str<=end){
                swap(matrix[row][str],matrix[row][end]);
                str++;
                end--;
            }

        }
       
    }
};