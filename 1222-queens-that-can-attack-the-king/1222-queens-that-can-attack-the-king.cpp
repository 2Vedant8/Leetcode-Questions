class Solution {
public:
    vector<vector<int>> queensAttacktheKing(vector<vector<int>>& queens, vector<int>& king) {
        vector<vector<int> > ans;
        int row = king[0], col = king[1];
        vector<vector<bool> > queen(8, vector<bool>(8, false));
        
        for(auto &q: queens) 
            queen[q[0]][q[1]] = true;
        
        //west side
        for(int j=col-1; j>=0; j--){
            if(queen[row][j]){
                ans.push_back({row, j});
                break;
            }
        }
        
        //east side
        for(int j=col+1; j<8; j++){
            if(queen[row][j]){
                ans.push_back({row, j});
                break;
            }
        }
        
        //north side
        for(int i=row-1; i>=0; i--){
            if(queen[i][col]){
                ans.push_back({i, col});
                break;
            }
        }
        
        //south side
        for(int i=row+1; i<8; i++){
            if(queen[i][col]){
                ans.push_back({i, col});
                break;
            }
        }
        
        //north west side
        for(int i=row-1, j=col-1; i>=0 && j>=0; i--, j--){
            if(queen[i][j]){
                ans.push_back({i, j});
                break;
            }
        }
        
        //south west side
        for(int i=row+1, j=col-1; i<8 && j>=0; i++, j--){
            if(queen[i][j]){
                ans.push_back({i, j});
                break;
            }
        }
        
        //south east side
        for(int i=row+1, j=col+1; i<8 && j<8; i++, j++){
            if(queen[i][j]){
                ans.push_back({i, j});
                break;
            }
        }
        
        //north east side
        for(int i=row-1, j=col+1; i>=0 && j<8; i--, j++){
            if(queen[i][j]){
                ans.push_back({i, j});
                break;
            }
        }
        
        return ans;
    }
};