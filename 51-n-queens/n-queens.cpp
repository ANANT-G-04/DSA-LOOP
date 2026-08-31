class Solution {
public:
bool check(vector<string>& board,int row,int col,int n){
   for(int j=0;j<n;j++){ //checks horizontally
    if(board[row][j]=='Q'){
        return false;
    }
   }
   for(int j=0;j<n;j++){//checks vertically
    if(board[j][col]=='Q'){
        return false;
    }
   }
   for(int i=row,j=col;i>=0 && j>=0;i--,j--){
    if(board[i][j]=='Q'){
        return false;
    }
   }
   for(int i=row,j=col;j<n && i>=0;j++,i--){
    if(board[i][j]=='Q'){
        return false;
    }
   }
   return true;
}
    void getQueen(vector<string>& board,int n,vector<vector<string>>&ans,int row ){
        if(row==n){
            ans.push_back(board);
            return;
        }
        for(int i=0;i<n;i++){
            if(check(board,row,i,n)){
              board[row][i]='Q';
              getQueen(board,n,ans,row+1);
              board[row][i]='.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<string> board(n,string(n,'.'));
        vector<vector<string>> ans;
        getQueen(board,n,ans,0);
        return ans;
    }
};