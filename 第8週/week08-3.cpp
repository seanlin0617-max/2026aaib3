//week08-3.cpp 學習計畫Matrix 第3題
//LeetCode 54. Spiral Matrix
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int M = matrix.size(),N = matrix[0].size();//長 寬
        vector<int> ans;
        int left=0,right=N-1,up=0,down=M-1;
        //中間要繞圈圈4個方向 往右 往下 往左 往上
        while(ans.size()<M*N){//重複做 直到收集全部的格子
        int i,j;
        i=up;//畫上面這條 要往右
        for (int j=left;j<=right;j++){//往右
           ans.push_back(matrix[i][j]);
        }
        up++;

        j=right;//最右邊這條 要往下
        for(int i=up;i<=down;i++){//往下
           ans.push_back(matrix[i][j]);
        }
        right--;

        if(ans.size()==M*N)break;
        i=down;//最下面這條 要往左
        for(int j=right;j>=left;j--){//往左
            ans.push_back(matrix[i][j]);
        }
        down--;

        j=left;//最左邊這條 要往上
        for(int i=down;i>=up;i--){//往上
            ans.push_back(matrix[i][j]);
        }
        left++;
    }
       return ans;
   }
};
//week08-3_again.cpp 學習計畫Matrix 第3題 重寫ㄧ次
//LeetCode 54. Spiral Matrix
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int M = matrix.size(),N = matrix[0].size();
        vector<int> ans;
        int left=0,right=N-1,up=0,down=M-1;
        while(ans.size()<M*N){
           for(int j=left;j<=right;j++)ans.push_back(matrix[up][j]);
           up++;
           for(int i=up;i<=down;i++)ans.push_back(matrix[i][right]);
           right--;

           if(ans.size()==M*N)break;

           for(int j=right;j>=left;j--)ans.push_back(matrix[down][j]);
           down--;
           for(int i=down;i>=up;i--)ans.push_back(matrix[i][left]);
           left++;
        }
       return ans;
   }
};
