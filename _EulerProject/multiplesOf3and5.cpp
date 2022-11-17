#include <iostream>
#include <vector>
using namespace std;

int index()
{
  int t;
  cout << "input value: " << "\n";
  cin >> t;
  int sum = 0, res = 0, i = 0, j = 0;

  for(int fact = t -1; 0 < fact; fact--)
  {

    int val1 = fact % 3;
    int val2 = fact % 5;

    if(val1 == 0)
    {
      sum += fact;
    }
    else if(val2 == 0)
    {
      sum += fact;
    }
  };
  res = sum;

  cout << "response: " << res << "\n";
  return 0;
};

int main()
{
    return index();
};
