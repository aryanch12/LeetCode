class Solution {
public:
    void solve(vector<int>&nums, int i, vector<int> &temp, vector<vector<int>> &ans) {

        if (i == nums.size()) {
            ans.push_back(temp);
            return;
        }

        //pick an element
        temp.push_back(nums[i]);
        solve(nums, i + 1, temp, ans);

        //Don't pick 
        temp.pop_back();
        while (i + 1 < nums.size() && nums[i] == nums[i + 1]) i++;   //handling the duplicates by ignoring all the occurences of the element that we're not picking
        solve(nums, i + 1, temp, ans);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int> temp;
        sort(nums.begin(), nums.end()); // Sorting it to handle all the duplicates
        solve(nums, 0, temp, ans);
        return ans;
    }
};