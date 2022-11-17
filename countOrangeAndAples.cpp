#include<iostream>
#include<vector>
using namespace std;
int main()
{
 
  int i1 =0;
  int x =0, x1 =0;
  int s = 9, t =10;
  int a = 4, b = 5;
  int fruitsA =0, fruitsO =0;
  vector<int>apples = {4,5,6};
  vector<int>oranges = {1,2,4};
  vector<vector<int>>arr = {apples, oranges};
  
  for(int i =0; i <= 1; i++)
  {
      i1 = 0;
      while(arr[i].size() > i1)
      {
        x = arr[i][i1];
        if(i == 0)
          x1 = (x + a);
        else
          x1 = (x + b);
       
        if(x1 >= s && x1 <= t)
        {
            if(i == 0)
              fruitsA += 1;
            else
              fruitsO += 1;
        };
        i1++;
      };
  }
   cout << fruitsA << "\n";
   cout << fruitsO << "\n";
}  
