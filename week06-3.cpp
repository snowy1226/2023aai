///week06-3.cpp
/// leetcode �ǲ߭p�e  ���� simulationo ��1�D
class Solution {
public:
    int calPoints(vector<string>& operations) {
          vector<int> a;
          for(string op : operations) {    ///c++�i���j��
            ///cout << op << "\n"; ///�ոլݷ|�L�X�ƻ�F��
            if(op[0]=='+'){ ///�⥽��Ƭۥ[,�A��^�h
            int temp = a.back();///���O�U�̫�@��
            a.pop_back();///�ȮɦR���L
           int temp2 = a.back();///�A�O�U�̫��2��
           a.push_back(temp); ///����̫�@����^�h
           a.push_back(temp+temp2); ///��Ƭۥ[,�A��^�h
            }else if(op[0]=='D'){ ///�ƻs�̫�@��,�Adouble���⭿,�A��^�h
               a.push_back( a.back()*2);
            }else if(op[0]=='C'){ ///�R���̫�@��
               a.pop_back();
            }else{ ///��stoi(op)���,��^�h
               a.push_back( stoi(op) );

          }
          }
        ///�̫�,��for�j��,��}�Ca����,�����[�_��
        int ans = 0;
        for(int now : a){///c++�i���j��,�]�i�H��for(int i=0; i<a.size(); i++){int now=a[i]}
            ans += now;
         }
        return ans; ///���H�K������
    }
};
