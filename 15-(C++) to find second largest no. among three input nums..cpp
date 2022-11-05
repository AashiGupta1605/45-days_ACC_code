/*Problem
Three numbers A, B and C are the inputs. Write a program to find second largest among them.

Input Format
The first line contains an integer T, the total number of testcases. Then T lines follow, each line contains three integers A, B and C.

Output Format
For each test case, display the second largest among A, B and C, in a new line.*/

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,a,b,c,max;
	cin>>t;
	while(t!=0){
	    cin>>a>>b>>c;
	    if(a>b&&a>c)
	    max=a;
	    else if(b>a&&b>c)
	    max=b;
	    else
	    max=c;
	    if(a<max&&a>b||a>c)
	    cout<<a<<endl;
	    else if(b<max&&b>a||b>c)
	    cout<<b<<endl;
	    else if(c<max&&c>a||c>b)
	    cout<<c<<endl;
	    t--;
	}
	return 0;
}

