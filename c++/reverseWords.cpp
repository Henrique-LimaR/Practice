#include <iostream>
#include <string>
#include <vector>
using namespace std;

string reverseWords(string s) {
        //transform in single space between sentences.
        //reverse the position sentences.
  int n = s.size(),i=0,j=0,k=0;
  vector<string> words;
  string sentence = ""; 
  string value = ""; 
  string word = ""; 
  while(i < n)
  {
    if(s[i] != ' ') //first.
    {
      while(s[i] != ' ' && i < n)
      {
        sentence+=s[i];
        i++;
      };
      sentence+=',';
    };
    i++;
  };
  
  while(j < sentence.size())
  {
    if(sentence[j] != ',')
    {
      while(sentence[j]!= ',')
      {
        word+=sentence[j];
        j++;
      };     
    }else {
      words.push_back(word);
      word="";
      j++;
    };
  };
 
   k =words.size()-1;
   while(k>=0) {
    value+=words[k] + ' ';
    k--; 
  };
  value.erase(value.size());
  return value;
};

int main() {
  auto s = "the sky is blue";
  cout << reverseWords(s) << '\n';
  return 0;
};
