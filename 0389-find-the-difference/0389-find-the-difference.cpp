class Solution {
public:
    char findTheDifference(string s, string t) {
        map<char,int>mp,mp1;
        for(auto i:s)mp[i]++;
        for(auto j:t)mp1[j]++;
        char ans;
        for(auto i:mp1){
            if(mp[i.first]!=mp1[i.first]){
                ans=i.first;
        }
        
    }
    return ans;
    }
};