class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
       int str=1;
       int end=arr.size()-2;
       int mid;
       
       while(str<=end){
        mid=str+(end-str)/2;
        if(arr[mid]>arr[mid+1]&& arr[mid]>arr[mid-1]){
            return mid;

        }
        else{
            if( arr[mid]<arr[mid+1]){
                str=mid+1;
            }
             if( arr[mid]>arr[mid+1]){
                end=mid-1;
            }
        }
       }
       return -1;
        
    }
};