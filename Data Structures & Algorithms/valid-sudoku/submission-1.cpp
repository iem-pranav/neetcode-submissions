class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        // // check row-wise
        unordered_set<char> rs;
        for(auto row : board){
            rs.clear();
            for(auto cell : row){
                if(cell != '.'){
                    if(rs.contains(cell)) return false;
                    rs.insert(cell);
                }
            }
        }

        // check col-wise
        unordered_set<char> cs;
        for(int i = 0; i < 9; i++){
            cs.clear();
            for(int j = 0; j < 9; j++){
                char cell = board[j][i];
                if(cell != '.'){
                    if(cs.contains(cell)) return false;
                    cs.insert(cell);
                }
            }
        }

        // check 3x3
        unordered_set<char> ccs;
        for(int k = 0; k < 9; k++){
            int x = (k % 3) * 3;
            int y = (k / 3) * 3;
            ccs.clear();
            for(int i = x; i < (x + 3); i++){
                for(int j = y; j < (y + 3); j++){
                    char cell = board[i][j];
                    if(cell != '.'){
                        if(ccs.contains(cell)) return false;
                        ccs.insert(cell);
                    }
                }
            }
        }

        return true;
    }
};
