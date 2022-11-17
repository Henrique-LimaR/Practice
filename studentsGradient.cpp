#include <iostream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;

int main()
{ 
   vector<int> grades
{
80,
96,
18,
75,
80,
60,
60,
15,
45,
15,
10,
5,
46,
87,
33,
60,
14,
71,
65,
2,
5,
97,
0
};
  
   int opt1, opt2;
   string opt_str = "", decimal_two = "";
   
   for(int j = 0; j < grades.size(); j++)
   {
      opt_str = to_string(grades[j]);

      decimal_two = opt_str[1];      

      stringstream io(decimal_two);
      int opt = 0;
      io >> opt;

      if(opt < 5)
      {
         if(3 > (5 - opt))
         {
            opt1 = grades[j];
            opt2 = opt1 - opt;
            grades[j] = (opt2 + 5);
         };
      }
      if(opt > 5)
      {
         if(3 > (10 - opt))
         {
           opt1 = grades[j];
           opt2 = opt1 - opt;
           grades[j] = (opt2 + 10);
         }; 
      };
   };

   for(int x: grades)
    {
       cout << x << "\n";
    };
   return 0;  
}
