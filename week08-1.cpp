///week08-1.cpp leecode�ǲ߭p�e matrix�x�}��1�D
/// 1672.richest customer wealth
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int ans = 0;
        for (int i=0; i<accounts.size(); i++ ){    ///����i
            int now = 0;  ///�j��e�� now = 0
            for (int j=0; j<accounts[0].size(); j++ ){  ///�k��j
                now += accounts[i][j];  ///����[�_��
            }  ///�j���ح� ��s now�}�C ����i �k��j
            ///�j��᭱now���ӥ�
            ans = max(ans, now);  ///�̦������H,��s����
        }
        return ans;
    }
};
