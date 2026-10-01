//week04-2a.cpp SOIT108_ADVANCE_008
// C version
#include <stdio.h>

int main()
{
  int a[10];
  for(int i=0;i<10;i++){
      scanf("%d",&a[i]);//c version
  }

  for(int i=0;i<10;i++){
     for(int j=i+1;j<10;j++){
        if(a[i]<a[j]){
          int temp = a[i];//C version
          a[i]=a[j];
          a[j]=temp;
        }
     }
  }

  for(int i=0;i<10;i++){
     printf("%d ",a[i]);//c version
  }
}
//week04-2b.cpp SOIT108_ADVANCE_008
// C++ version (This week)
#include <iostream>
#include <vector>
#include <algorithm>//week04
using namespace std;
int main()
{
   vector<int>a(10);//week03+week04
   for(int i=0;i<10;i++){
      cin>>a[i];
   }
   sort(a.begin(),a.end());

   for(int i=9;i>=0;i--){
      cout<<a[i]<<' ';
   }
}
