//week03-2a.cpp 二合一要寫兩次
//把陣列乘起來,看是正數,負數,還是0
class Solution {
public:
    int arraySign(vector<int>& nums) {
        int ans = 1; //因為0乘任何數都會變成0,只有1乘甚麼變甚麼
        for(int i=0; i<nums.size(); i++){  //看有幾個數,迴圈跑幾次
            ans *= nums[i]; // 每次把nums[i]乘進ans裡

        }//數字越乘越大,1000個數字,乘到一半,就爆炸了,所以程式錯了
        if(ans>0) return 1;
        if(ans<0) return -1;
        return 0;
      }

};