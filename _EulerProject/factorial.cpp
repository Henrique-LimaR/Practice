#include<iostream>
#include<vector>
#include<string>
#include<sstream>
using namespace std;

int main(){
  int n=10,i=1;
  long long int fact=n;
  string str_fact=""; 
  int total=0,temp;
  
  while(i<n)
  {
    fact = fact * i;
    i++;
  };

  stringstream io;
  
  io << fact;
  io >> str_fact;

  for(int i=0;i<str_fact.size()-1;++i)
  {
    stringstream io1;
    
    io1 << str_fact[i];
    io1 >> temp;
    
    total+= temp;
  };

  cout << "type strig: " << str_fact << '\n';
  cout << "type number: " << fact << '\n';
  cout << "sum of total: " << total << '\n';
  return total;
}; 
