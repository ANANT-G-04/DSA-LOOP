class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> ans;
        int str=0;
        int end=numbers.size()-1;
        while(str<end){
            int sum;
            sum=numbers[str]+numbers[end];
            if(sum>target){
                end--;
            }
            else if(sum<target){
                str++;
            }
            else{
                ans.push_back(str+1);
                ans.push_back(end+1);
                break;
            }

        }
        return ans;
    }
};