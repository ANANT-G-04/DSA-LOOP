class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
      vector<int> merge=nums1;
        merge.insert(merge.end(), nums2.begin(), nums2.end());
        sort(merge.begin(),merge.end());
        double ans;
        if(merge.size()%2!=0){
            int n=(merge.size()+1)/2;
            ans=merge[n-1];
        }
        else{
            int n=merge.size()/2;
            ans=(merge[n]+merge[n-1])/2.0;
        }
        return ans;
    }
};