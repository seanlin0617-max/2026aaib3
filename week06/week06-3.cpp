//week06-3.cpp 學習計畫Simulation 第2題
//LeetCode 657.Robot to Oringe
class Solution{
public:
  bool judgeCircle(string moves){//week02:string
      int x = 0,y = 0;
      for(char c : moves){//week02:C++ 進階for迴圈
         if(c=='U')y++;//往上
         if(c=='D')y--;//往下
         if(c=='R')x++;//往右
         if(c=='L')x--;//往左
      }
      if(x==0 && y==0)return true;
      else return false;
  }
};
