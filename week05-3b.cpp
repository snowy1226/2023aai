///week05-3b.cpp part1:input, part2:output
///part3: stringstream part4: reverse�ϹL��
///CPE ��2�D UVA483 �˹L��
#include <iostream>
#include <sstream> /// part3: stringstream ���ɮ׬O sstream
#include <algorithm> ///part4 reverse ���t��k
using namespace std;
int main()
{
    string line; ///�@��r���r��
    while (getline(cin, line)) { ///Ū�i��
        stringstream ss(line); /// part3: ��stringstream�_�r
        string word; ///�r��o��
        while( ss >> word){ ///��ss�_�r
            reverse( word.begin(), word.end() ); ///part4
            cout << "Ū��F" << word << endl; ///part3
        }
        cout << line << endl; /// part2 : output
    }
}
