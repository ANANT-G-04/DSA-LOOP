class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector <int> vec(m+n);
        for(int i=0;i<m;i++){
            vec[i]=nums1[i];
        }
        for(int i= m;i<=m+n-1;i++){
            vec[i]=nums2[i-m];
        }
        sort(vec.begin(),vec.end());
        for(int i =0;i<m+n;i++){
            nums1[i]=vec[i];
        }
    }
};