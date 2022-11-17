#include <bits/stdc++.h>
#include<sstream>
using namespace std;

// Maximum number of digits
// in output
#define MAX 1000

// Function to find the factorial
// of large number and return
// them in string format
string factorial(long long n)
{
	if (n > MAX) {
		cout << " Integer Overflow"
			<< '\n';
		return "";
	}

	long long counter;
	long double sum = 0;

	// Base case
	if (n == 0){
		return "1";
  }

	// Calculate the sum of
	// logarithmic values
	for (counter = 1; counter <= n;counter++) {
		sum = sum + log(counter);
	}

	// Number becomes too big to hold in
	// unsigned long integers.
	// Hence converted to string
	// Answer is sometimes under
	// estimated due to floating point
	// operations so round() is used
	string result = to_string(round(exp(sum)));

	return result;
};

// Driver code
int main()
{
	clock_t tStart = clock();
	string str;
	str = factorial(100);
	cout << "The factorial is: "
		<< str << endl;

  int total=0;  
 
  for(char x: str)
  {
    int temp;
    if(int(x)==46)
    { 
      int(x)=48; 
    };
       
       stringstream io;
       io << x;
       io << temp;
       total+=temp;
  };
  cout << "response from total: " << total << '\n';
	// Calculates the time taken
	// by the algorithm to execute
	cout << "Time taken: " << setprecision(10)
		<< ((double)(clock() - tStart)
			/ CLOCKS_PER_SEC)
		<< " s" << endl;
};
