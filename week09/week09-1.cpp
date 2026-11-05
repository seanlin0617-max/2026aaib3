//week09-1a.cpp 學習計畫 Matrix 第2題
//1572. Matrix Diagonal Sum
class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
       int N = mat.size();
       int ans=0;
       //迴圈,把矩陣的對角線加起來
       for(int i=0;i<N;i++){
        ans += mat[i][i];
       }
        for(int i=0;i<N;i++){
        ans += mat[N-1-i][i];
        }
        if (N%2==1)ans -=mat[N/2][N/2];
       return ans;
    }
};
//week09-1b.cpp 學習計畫 Matrix 第2題
class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
       int N = mat.size();
       int ans=0;
       for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            if(i==j||i+j==N-1) ans += mat[i][j];
        }
       }
       return ans;
    }
};
