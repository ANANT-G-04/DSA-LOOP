class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int stri=0;
        int endi=matrix.size()-1;
        int strj=0;
        int endj=matrix[0].size()-1;
        int mid1;
        int mid2;
        while(stri<=endi){
             mid1=(stri+endi)/2;
            if(matrix[mid1][strj]<=target && target<=matrix[mid1][endj]){
                while(strj<=endj){
                    mid2=(strj+endj)/2;
                    if(target>matrix[mid1][mid2]){
                        strj=mid2+1;
                    }
                    else if(target<matrix[mid1][mid2]){
                        endj=mid2-1;
                    }
                    else if(target==matrix[mid1][mid2]){
                        return true;
                    }
                    else{
                        return false;
                    }
                }
            }
            else if(target<matrix[mid1][strj]){
                endi=mid1-1;
            }
            else {
                stri=mid1+1;
            }
        }
        
        
        
        return false;
        
            }
};