/*Problem
Kulyash believes in equality.
Given an integer NN, output a binary string of length NN such that:

The count of 0101 subsequences in the string is equal to the count of 1010 subsequences;
The string has at least one occurrence of 00 as well as 11.
If multiple such strings exist, print any. Also, it is guaranteed that corresponding to the given input, an answer always exists.

Input Format
First line will contain TT, number of test cases. Then the test cases follow.
Each test case contains of a single line of input, an integer NN - the length of the binary string.
Output Format
For each test case, output any binary string of length NN satisfying the given conditions.*/

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n;
	cin>>t;
	while(t--){
	    cin>>n;
	    for(int i=0;i<1;i++)
	    cout<<"1";
	    for(int i=0;i<n-2;i++)
	    cout<<"0";
	    for(int i=0;i<1;i++)
	    cout<<"1"<<endl;
	}
	return 0;
}

