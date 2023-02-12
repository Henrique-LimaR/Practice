#include<algorithm>
#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int>nums1{2,1};
    vector<int>nums2{3,4};
    vector<int>merge;

        int s = nums1.size(), s1=nums2.size();  
        int verify=0;
        double val=0,val1=0, val2=0;
        int i=0, j=0; 
        double mid=0;
         
        while(i<s)
        {
           merge.push_back(nums1[i++]);
        };
        while(j<s1)
        {
            merge.push_back(nums2[j++]);
        };
        
        sort(merge.begin(), merge.end());
        
        verify=merge.size();

        cout << "size merge vector: " << verify << '\n';
        if(verify % 2!=0)
        {
            verify-1;
            i=0;
            while(i < (verify/2))
            {
                i++;
            };
            mid=merge[i];
            cout << "res mid 1: " << mid << '\n';
            return mid;
        }
        else {
            i=0;
            while(i < (verify/2))
            {
                i++;
            };
            val= merge[i];
            val1= (merge[i-1]);
            val2= (val+val1);
            mid= (val2/2);
            cout << "val1: " << val1 << '\n';
            cout << "res mid 2: " << mid << '\n';
            double num = 7/2;
            cout << "double val: " << num << '\n';
            return mid;
        };
    return 0;
}
