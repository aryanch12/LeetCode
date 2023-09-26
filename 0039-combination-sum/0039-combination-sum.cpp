// in this problem using the the technique of pick and not pick we can try each and every comnimation to find the total combination whose  element sums up to give the value  equals to the target
class Solution {
    
public:
    
    void findCombination(int ind, int target,  vector<int> arr, vector<vector<int>> &ans, vector<int>&ds )
    {
        if(ind==arr.size())  
        {
            if(target==0) {
                ans.push_back(ds);
        }
            return;
        }
        // pick up the element
        if(arr[ind]<= target)
        {
            ds.push_back(arr[ind]);
            findCombination(ind,target-arr[ind],arr,ans,ds);
            
            // now removing the last added element from the ds sp that  the recursion will move on to the not pick  part
            ds.pop_back();
        }
// isme agar humne previous index ko non pick kiya hai to humm next element ke liye check kaarenge with the previous target         
         findCombination(ind+1,target,arr,ans,ds);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> ds;
        findCombination(0,target,candidates,ans,ds);
        return ans;
    }
};