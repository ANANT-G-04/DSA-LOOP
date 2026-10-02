class Solution {
public:
    int firstUniqChar(string s) {
    unordered_map<char,int> m;
    queue<int> q;
    for(int i=0;i<s.length();i++){
        if(m.find(s[i])==m.end()){
            m[s[i]]=1;
            q.push(i);
        }
        else{
            m[s[i]]++;
        }

    }
    int k=0;
    while(!q.empty()){
        if(m[s[q.front()]]>1){
            q.pop();
            
        }
        else{
           return q.front();
        }
    }
    return -1;
    }
};