#include <iostream>
#include <vector>
using namespace std;
int main()
{
       vector<int>nums{1,2,3,4,5};
       int target=4;
       int n=nums.size();
       int right=nums[n-1], left=0;
       int mid=(right+left)/2;
       int element_mid=0;
    
        while(mid!=target || mid != -1)
        {
         element_mid=nums[mid]; 
         if(element_mid==target) {
           cout << "result: " << mid << '\n'; 
           return mid;
         };

         if(element_mid > target) {
            right=(mid-1);
         }
         else {
            left=(mid+1);
         };

         if(left > right)
         {
            cout << "-1" << '\n';
            cout << "something error: " << '\n'; 
            return -1;
         };
         mid=(left+right)/2;
        };
    return 0;
}
