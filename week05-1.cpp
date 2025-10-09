//week05-1.cpp
//學習計畫 built-in functions 58.
class Solution {
public:
    int lengthOfLastWord(string s) {
        stringstream ss(s); //把字串,變成之前教的cin iostream
        string word; //字串的word
        //ss >> word; //像之前教的 cin >> word
        //cont << "讀到了" << word << "/n";
        while( ss >> word ){ //一直讀近來
            //裡面甚麼都不做
        }
        return word.length(); //最後的字的長度 //return 0;


    }
};
