class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int area;
        int maxar=0;
        stack<int> s;
        vector<int> r(heights.size());
        for(int i=heights.size()-1;i>=0;i--){
            while(s.size()>0 && heights[s.top()]>=heights[i]){
                s.pop();
            }
            if(s.empty()){
                r[i]=heights.size();
                
            }
            else{
                r[i]=s.top();
            }
            s.push(i);
        }
        stack<int> st;
        vector<int> l(heights.size());
        for(int i=0;i<heights.size();i++){
            while(st.size()>0 && heights[st.top()]>=heights[i]){
                st.pop();
            }
            if(st.empty()){  
                l[i]=-1;
               
            }
            else{
                l[i]=st.top();
            }
            st.push(i);
        }
        for(int i=0;i<heights.size();i++){
            
            area=heights[i]*(r[i]-l[i]-1);
            maxar=max(maxar,area);
        }
        return maxar;
    }
};