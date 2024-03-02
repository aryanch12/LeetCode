class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        map<int,int>mpp;
        vector<int>squares;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]*nums[i]]++;
        }
        for(auto it : mpp){
            int count=it.second;
            while(count>0)
            {
                squares.push_back(it.first);
                count--;
            }
        }
        return squares;
        
    }
};