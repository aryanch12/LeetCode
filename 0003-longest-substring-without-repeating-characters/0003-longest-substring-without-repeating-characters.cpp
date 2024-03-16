class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>map;
        int tail=0,head=0,ans=0;
        for(head=0;head<s.size();head++){
            while(map[s[head]]>0){
                ans=max(ans,head-tail);
                map[s[tail]]--;
                tail++;

            }
            map[s[head]]++;
        }
        return max(ans,head-tail);
        
    }
};