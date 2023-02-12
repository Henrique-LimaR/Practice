#include<iostream>
#include<vector>

int main()
{
  long long a[] = {1,2,3,2,2};
  long long left=0;
  long long s=0;
  
  int n = a.size();
  for(int i=0;i<n;i++)
  {
    s+=a[i];
  }

    for(int i=0;i<n;i++)
    {
      long long right=s-left-a[i];

      if(right==left)
      {
        return i+1;
      }
      left += a[i];
    }
    return -1;
}
