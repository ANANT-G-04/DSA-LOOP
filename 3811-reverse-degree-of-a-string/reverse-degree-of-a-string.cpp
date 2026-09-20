class Solution {
public:
    int reverseDegree(string s) {
        unordered_map<char,int>m;
        int c=0;
        for(int i=97;i<=122;i++){
            m[(char)i]=26-c;
            c++;
        }
        int sum=0;
        for(int i=0;i<s.length();i++){
            sum+=m[s[i]]*(i+1);
        }
        return sum;
    }
};