/// week07-3.cpp學習計畫 simulation 第三題
/// 1275.find wiiner on a tic tac toe game
class Solution {
public: ///vector 是c++陣列,身縮自如,但是2D比較難寫
    string tictactoe(vector<vector<int>>& moves) {
        int a[3][3] = {}; ///C語言的陣列,大一教過,比較簡單
        ///{}大括號代表初始值,(裡面空的)代表都是0
        int now = 1; ///現在的玩家 1:玩家A 2:玩家B
        int winner = 0; ///還沒找到得勝玩家
        for(vector<int>& move : moves) {
            int i = move[0], j = move[1];  ///取出座標
            a[i][j] = now; //把旗子下在陣列裡
            ///下完後,要檢查有沒有得勝!
            if (now==a[i][0] && now==a[i][1] && now==a[i][2]) winner = now; ///橫線
            if (now==a[0][j] && now==a[1][j] && now==a[2][j]) winner = now; ///直線
            if (now==a[0][0] && now==a[1][1] && now==a[2][2]) winner = now; ///左上右下直線
            if (now==a[0][2] && now==a[1][1] && now==a[2][0]) winner = now; /// 右上左下直線
            if (now==1) now = 2; ///兩人要交換1換2
            else now = 1; ///或2換一

        }
        if (winner==1) return "A";
        else if (winner==2) return "B";
        else if (moves.size()==9) return "Draw"; ///平手的英文 draw
        else return "Pending" ; ///送出去,發現還有第4種可能,叫pending還沒下玩啊哈



            }
};
