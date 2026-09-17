//week02-4.cpp學習計畫basic第2題
//Leetcode 389. Find the Difference
class Solution {
public:
    char findTheDifference(string s, string t) {
        int U[26]={};//有26個回收桶,裡面都是0
        for(char c : s){//C++進階for迴圈寫法
           U[c-'a']++;
        }
        for(char c:t){
         U[c-'a']--;
        if(U[c-'a']<0)return c;
        }
        return 0;
    }
};
