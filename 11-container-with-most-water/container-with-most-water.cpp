class Solution {
public:
    int maxArea(vector<int>& height) {
        int lp=0,rp=height.size()-1;
        int k=0;
        int ar=0;
        int width;
        while(lp<rp){
      width=rp-lp;
      k=min(height[lp],height[rp])*width;
      ar=max(k,ar);
      if(height[lp]<height[rp]){
        lp++;
      }
      else{
        rp--;
      }
      
        }
        return ar;
    }
};