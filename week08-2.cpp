///week08-2.cpp leecode學習計畫 matrix矩陣第4題
///73.set matrix zeroes 設定一堆0
///要小心,不能一邊讀,一邊設成0,要兩階段 先讀完,再設0

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        ///第一階段,先讀完 記下全部的零對應的 i和j
        int M = matrix.size(), N = matrix[0].size(); ///左手M 右手N
        vector<int> markI(M,0),markJ(N,0); ///宣告c++的陣列,長度分別為M,N  裡面都設成0
        for (int i=0; i < M; i++){
            for (int j=0; j < N; j++){
                if (matrix[i][j]==0) { ///要記下對應的 i,j
                    markI[i] = 1; ///標記一下 i 的這整條,等一下都要清為0
                    markJ[j] = 1; ///標記一下 j 的這整條,等一下都要清為0

                }
            }
        }
        ///第2階段 再照著markI markJ的標記,把整條都清為0
        for(int i =0; i < M; i++){
            for (int j = 0; j < N; j++){
                if (markI[i]==1 || markJ[j]==1 ) matrix[i][j] = 0;
            } ///如果有標記,再把他的對應項變成0
        }
    }
};
