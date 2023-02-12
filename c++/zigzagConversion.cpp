#include<iostream>
#include<vector>
#include<string> 
using namespace std;

string convert(string s, int numRows) {
    if(numRows==1) 
    {
      return s;
    };

    string row_map = {string row="", { for(int x+1: numRows+1) }};
    bool up=true;
    int row=0;

    for(int x: s)
    { 
      row_map[row] += x;
      if(row.size() == 1 || (row.size() < numRows) && up)
      {
        row+=1;
        up=true;
      }else {
        row-=1;
        up= false;
      };
    };
};

int main(){
  string s = "PAYPALISHIRING";
  cout << convert(s,3) << '\n';
  return 0;
};
