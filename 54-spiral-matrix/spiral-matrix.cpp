class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> vec;
       int srow=0;
       int erow=matrix.size()-1;
       int scol=0;
       int ecol=matrix[0].size()-1;
       while(srow<=erow && scol<=ecol){
        for(int i=scol;i<=ecol;i++){//left to right
            vec.push_back(matrix[srow][i]);
        }
        for(int i=srow+1;i<=erow;i++){//top to bottom
            vec.push_back(matrix[i][ecol]);
        }
        for(int i=ecol-1;i>=scol;i--){//right to left
            if(srow==erow){
                break;
            }
            vec.push_back(matrix[erow][i]);
        }
        for(int i=erow-1;i>=srow+1;i--){//bottom to top
            if(scol==ecol){
                break;
            }
            vec.push_back(matrix[i][scol]);
        }
        srow++;scol++;ecol--;erow--;
       }
       return vec;
    }
};