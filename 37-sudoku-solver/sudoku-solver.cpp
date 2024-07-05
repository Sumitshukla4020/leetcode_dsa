class Solution {
public:
    bool check(vector<vector<char>>& board, int k, int row, int col){
        char c = '0' + k;
        int n = board.size();
        for(int i=0;i<n;i++){
            if(board[i][col]==c || board[row][i]==c){
                return false;
            }
            
           
            if(board[3*(row/3)+i/3][3*(col/3)+i%3]==c){
                return false;
            }
        }
        return true;
    }

    bool solve(vector<vector<char>>& board){
        int n = board.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(board[i][j]=='.'){
                    for(int k=1;k<=9;k++){
                        if(check(board,k,i,j)){
                            char c = '0' + k;
                            board[i][j]=c;
                            bool horse = solve(board);
                            if(horse==true){
                                return true;
                            }
                            else{
                                board[i][j]='.';
                            }
                        }
                    }
                    return false;
                }
            }
        }
        return true;
    }

    void solveSudoku(vector<vector<char>>& board) {
        bool ok = solve(board);
        
    }
};