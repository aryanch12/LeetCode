class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows==1){
            return s;
        }
        int n = s.size();
        int sections = ceil(n/(2 * numRows - 2.0));
        int noColumns = sections * (numRows-1);
        vector<vector<char>> matrix(numRows,vector<char>(noColumns,' '));
        
        int currRow = 0, currCol = 0, currentStringIndex = 0;
        // traverse till string length valid
        while(currentStringIndex<n){
            // fill the matrix from up down 
            while(currRow<numRows && currentStringIndex<n){
                matrix[currRow][currCol]=s[currentStringIndex];
                currRow++;
                currentStringIndex++;
            }
            currCol++;
            currRow-=2; // currRow value is equall to numRowsval
            // fill the matrix diagonally 
            while(currRow>0 && currCol<noColumns && currentStringIndex<n){
                matrix[currRow][currCol]=s[currentStringIndex];
                currRow--;
                currCol++;
                currentStringIndex++;
            }
        }
        //ans store in each row 
        string ans;
        for(auto& row:matrix){
            for(auto& chara: row){
                if(chara!=' ')
                    ans.push_back(chara);
            }
        }
        return ans;
    }
};