class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& vec) {
        stack <int> st;
    vector<int> ans;
    for(int i=vec.size()-1;i>=0;i--){
        while(st.size()!=0 && vec[i]>st.top()){
            st.pop();
        }
        if(st.size()==0){
            ans.push_back(-1);
        }
        else if(st.top()>vec[i] ){
            ans.push_back(st.top());
        }
        st.push(vec[i]);
}
reverse(ans.begin(),ans.end());
unordered_map<int, int> m;
for(int i=0 ;i<ans.size();i++){
    m[vec[i]]=ans[i];
}
vector<int> final;
for(int i=0;i<nums1.size();i++){
    
        final.push_back(m[nums1[i]]);
    
}
return final;
    }
};