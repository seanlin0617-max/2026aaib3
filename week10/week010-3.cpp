//week010-3.cpp 學習計畫 Math 第2題
//LeetCode 1491. Average Salary Excluding the Minimum and Maximum Salary\
//把最高薪 最低薪 扣掉 剩下的平均
class Solution {
public:
    double average(vector<int>& salary) {
        int total = 0;
        int M=salary[0],m=salary[0];
        for(int now:salary){
           if(now > M) M=now;
           if(now<m)m=now;
            total +=now;//把薪水加進total;
        }
        return(total-M-m)/(salary.size()-2);
        //return total/salary.size();錯錯錯,要扣掉 最高薪 最低薪
    }
};
