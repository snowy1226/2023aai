//week05-4.cpp
//leetcode�ǲ߭p�e709
class Solution {
public:
    string toLowerCase(string s) {
        for (int i=0; i<s.length(); i++){  //�C�@�Ӧr��
            s[i] = tolower( s[i] );    //�ܦ��p�g
        } //�C�Ӧr��, ���ܦ��p�g(���㪩�n #include <ctype.h> )
        //�άO�� #include <cctype>��ӬO�P�@���ɮ�
        return s; //���װe�X�h
    }
};
