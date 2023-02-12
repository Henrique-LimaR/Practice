#include<iostream>
#include<vector>
using namespace std;

int main()
{
  vector<int>vect{1,2,3,4,9}; 
  int n=vect.size();
  int objective=9;
  int L=0, R=vect[n-1];
  int mid=(R+L)/2;

  while(n>mid)
  {
  int mid_element=vect[mid];  
  if(mid_element==objective)//first pass.
  {
    cout<< "index mid_element: " << mid << '\n';
    cout<< "mid: " << mid_element << '\n';
    return mid_element;
  } 
   else if(mid_element > objective)
   {
     R=(mid-1);
   }
   else{
     L=(mid+1);
   };

   if(L > R) //second pass.
   {
     cout << "don't have value here!" << '\n'; 
     return -1;
   };
   mid=(R+L)/2;
  };
  return 0;
};
