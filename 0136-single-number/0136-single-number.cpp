class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end()); 
        int i=1;
 int a = nums.size();
        for( ; i < a; i=i+2  ){
             if(nums[0]!=nums[1]) {
            return nums[0];}  
            if(nums[i]==nums[i-1]){
              }
            else break ; 
        }  return  nums[i-1];   }
};