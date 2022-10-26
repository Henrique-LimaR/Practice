#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
#include<sstream>
using namespace std;

int main()
{ 
  string concat=""; 
  string s="b"; 
  int i=0,j=1,t=0;
  int n=s.size(), i_w=0;
  vector<string> result;
  vector<int>indexes; 
  string longest_palindrome="";  
  string item; 

  if(s.size()==1)
  {
    cout << s << '\n';
    return 0;
  }
  if(s.size()==2)
  {
    return s.pop_back();
  };
  
  while(i<=n)
  {
    bool a=(s[i]==s[j]);
    bool b=(s[i]==s[j+1]);    

    if(a){
      t=i;
      while(t<=j)
      {
        concat+=s[t];
        t++;
      };
      concat+=" ";
    }
    else if(b){
      t=i;
      while(t<=j+1)
      {
        concat+=s[t]; 
        t++;
      };
      concat+=" "; 
  } 
    i++;
    j++;
  };
  
  stringstream ss (concat); 
  
  while(getline(ss, item, ' ')) {
    result.push_back(item);
  };
  
  for(auto x: result)
  {
    indexes.push_back(x.size());
  };

  sort(indexes.begin(),indexes.end());

  int max=indexes[indexes.size()-1]; 
  
  result.pop_back();
  for(auto x: result)
  {
    cout << "val: " << x << '\n';
    if(x.size()==max)
    {
      longest_palindrome=x;
    };
  };
  
  cout << "concat: " << concat << '\n';
  cout << "max val: " << max << '\n';
  cout << "longest palindrome: " << longest_palindrome << '\n';
  return 0;
};
