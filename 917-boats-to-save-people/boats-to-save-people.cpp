class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        
        int c=0;
        int str=0;
        int end=people.size()-1;
        while(str<=end){
            if(people[str]+people[end]<=limit){
                str++;
            }
            end--;
            c++;
        }
        return c;
    }
};