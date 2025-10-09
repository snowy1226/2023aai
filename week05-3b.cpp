///week05-3b.cpp part1:input, part2:output
///part3: stringstream part4: reverse反過來
///CPE 第2題 UVA483 倒過來
#include <iostream>
#include <sstream> /// part3: stringstream 的檔案是 sstream
#include <algorithm> ///part4 reverse 的演算法
using namespace std;
int main()
{
    string line; ///一行字的字串
    while (getline(cin, line)) { ///讀進來
        stringstream ss(line); /// part3: 用stringstream斷字
        string word; ///字放這裡
        while( ss >> word){ ///用ss斷字
            reverse( word.begin(), word.end() ); ///part4
            cout << "讀到了" << word << endl; ///part3
        }
        cout << line << endl; /// part2 : output
    }
}
