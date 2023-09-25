class Solution {
public:
    bool check(int x,int y,char tar,vector<vector<char>>& b){
        for(int i=0;i<9;i++){
            if(i!=x && b[i][y]==tar)return 0;
        }
        for(int j=0;j<9;j++){
            if(j!=y && b[x][j]==tar)return 0;
        }
        int ix=(x/3)*3;
        int iy=(y/3)*3;
        for(int i=ix;i<ix+3;i++){
            for(int j=iy;j<iy+3;j++){
                if(i!=x && j!=y && b[i][j]==tar)return 0;
            }
        }
        return 1;

    }
    bool isValidSudoku(vector<vector<char>>& b) {
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(b[i][j]!='.' && !check(i,j,b[i][j],b))return 0;
            }
        }
        return 1;
    }
};