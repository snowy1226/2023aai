///week07-4.cpp�ǲ߭p�esimulation���� �ĥ|�D
///1041.robot bounded in circle
class Solution {
public:
    bool isRobotBounded(string instructions) {
        instructions = instructions + instructions +instructions + instructions; //���|��
        cout << instructions;
        int d = 0 ; ///d:��V direction 0:�_ 1:�F 2:�n 3:��
        /// �k�� d = (d+1) %4 ��4���l��
        /// ���� d = (d-1+4) %4 = (d+3) %4 ���M�i�H�˹L��,�ӯ��_�F!
        int x = 0 , y = 0 ; /// x�y��, y�y�� �@�}�l�n�b�쥻����m(0,0)���I
        int dx[4] = {0, 1, 0, -1 };  ///�e�i�@��ɷ|�� x+= dx[d]�� y += dy[d]
        int dy[4] = {1, 0, -1, 0 }; ///�o���O�a��2D�ҫ������,�M�w�e�i�h��
        for(char c : instructions){  ///�̷Ӧr�������O,�@�����@�Ӱʧ@
            if(c=='G'){  ///�e�i�@��,�t�Xdx[d] dy[d]�e�i
              x += dx[d];
              y += dy[d];
            }else if (c=='R'){ ///�k��
                d = (d+1) % 4;
            }else if (c=='L'){ ///����
                d = (d+3) % 4;
            }

            }///���}�j���...���M�|�@���� ,���ɭԷ|�����^��,���ɭԷ|�^��
            ///cout << 'x' << x << 'y' << y << endl; �o�Odebug�Ϊ�
            if ( x==0 && y==0 ) return true;
            else return false;
            }
};


