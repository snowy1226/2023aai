///week05-2.cpp
/// ���x stringstream

#include <iostream> ///cin, cout getline
#include <sstream> /// stringstream �ݭn�L
#include <string> ///�ڭ̪��r�� string
using namespace std;
int main()
{
    cout << "�п�J�@�q�^��,�̭��i���Ů�:";
    string s; /// �r�� s
    getline(cin, s); ///�@��Ū�J�@���,��Js
    cout << "Ū��Fs�r��:" << s << endl;

    stringstream ss(s); ///�N�r�� s �ܦ� ss
    string word; ///�r�� word
    while (ss >> word){
        cout << "���@�Ӧr:"  << word << endl;
    }

}
