class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
       sort(piles.begin(),piles.end());
      
       int str=1;
       
       int end=piles[piles.size()-1];
       while(str<=end){
       int k=str+(end-str)/2;
        long long hrs=0;
        for(int i=0;i<piles.size();i++){
          hrs += (piles[i] + k - 1) / k;
        }
        if(hrs<=h){
            end=k-1;
        }
        else {
            str=k+1;
        }
        
       }
       return str;
    }
};