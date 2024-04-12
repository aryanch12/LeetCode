class Solution {
public:
    vector<vector<int>> ans;
    void solve(int k,int start,int &n,vector<int> &output){
        //base case
        if(k==0){
            ans.push_back(output);
            return;
        }
        
        if(start>n) return;
        
        output.push_back(start);
        solve(k-1,start+1,n,output);
        
        output.pop_back();
        solve(k,start+1,n,output);
        

        
        
    }
    
    vector<vector<int>> combine(int n, int k) {
        
        vector<int> output;

        // for(int i=1;i<=nums.size();i++){
        //     nums.push_back(i);
        // }
        
        solve(k,1,n,output);
        return ans;
        
    }
};