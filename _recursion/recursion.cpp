#include<iostream>
#include<vector>
#include<string>
using namespace std;

int sumValue(int value) {
  if(value==0)
  {
    cout << "first!" << '\n';
    return 0;
  };

  //orders, it's numbers(1 and 2) represents the code lines.
  //# reversed order:
  //first (2), second (1).
  //# sorted order.
  //first (1), second (2).

  sumValue(value - 1);//(1)
  cout << "value: " << value << '\n';//(2)

  return 0;
};

int main() {
  int val = 4;
  return sumValue(val) << '\n';
};
