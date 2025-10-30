///week08-2.cpp leecode�ǲ߭p�e matrix�x�}��4�D
///73.set matrix zeroes �]�w�@��0
///�n�p��,����@��Ū,�@��]��0,�n�ⶥ�q ��Ū��,�A�]0

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        ///�Ĥ@���q,��Ū�� �O�U�������s������ i�Mj
        int M = matrix.size(), N = matrix[0].size(); ///����M �k��N
        vector<int> markI(M,0),markJ(N,0); ///�ŧic++���}�C,���פ��O��M,N  �̭����]��0
        for (int i=0; i < M; i++){
            for (int j=0; j < N; j++){
                if (matrix[i][j]==0) { ///�n�O�U������ i,j
                    markI[i] = 1; ///�аO�@�U i ���o���,���@�U���n�M��0
                    markJ[j] = 1; ///�аO�@�U j ���o���,���@�U���n�M��0

                }
            }
        }
        ///��2���q �A�ӵ�markI markJ���аO,�������M��0
        for(int i =0; i < M; i++){
            for (int j = 0; j < N; j++){
                if (markI[i]==1 || markJ[j]==1 ) matrix[i][j] = 0;
            } ///�p�G���аO,�A��L���������ܦ�0
        }
    }
};
