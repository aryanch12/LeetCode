class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int newptr =0;
        for(int i=0 ;i<nums.size();i++){
            if(nums[i]!=val){
             nums[newptr]=nums[i];
             newptr++;
            }
        }
      
        return newptr;
    }
};