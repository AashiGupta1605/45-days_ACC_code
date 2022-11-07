/*Problem
Chef bought NN items from a shop. Although it is hard to carry all these items in hand, so Chef has to buy some polybags to store these items.

1 polybag can contain at most 10 items. What is the minimum number of polybags needed by Chef?

Input Format
The first line will contain an integer T - number of test cases. Then the test cases follow.
The first and only line of each test case contains an integer N - the number of items bought by Chef.

Output Format
For each test case, output the minimum number of polybags required.*/

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n;
	cin>>t;
	while(t!=0){
	    cin>>n;
	    int c=0;
	    while(n!=0){
	        c=c+n/10;
	        if(n<10){
	            c=c+1;
	            n=0;
	        }
	        else
	        n=n%10;
	    }cout<<c<<endl;
	    t--;
	}
	return 0;
}

