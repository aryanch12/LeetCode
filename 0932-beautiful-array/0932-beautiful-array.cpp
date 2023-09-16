class Solution {
public:
    vector<int> beautifulArray(int n) {
        vector<int> res = {1};
        while(res.size() < n)
        {
            vector<int> tmp;
            for(auto& elem : res)
            {
                if(elem*2 - 1 <= n)
                    tmp.push_back(elem * 2 - 1);
            }
            for(auto & elem: res)
            {
                if(elem * 2 <= n)
                    tmp.push_back(elem * 2);
            }
            res = tmp;
        }
        return res;
    }
};
