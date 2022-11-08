/*Problem
Two friends Chef and Chefina are currently on floors A and B respectively. They hear an announcement that prizes are being distributed on the ground floor and 
so decide to reach the ground floor as soon as possible.

Chef can climb down X floors per minute while Chefina can climb down Y floors per minute. Determine who will reach the ground floor first. In case both reach 
the ground floor together, print Both.

Input Format
The first line of input will contain a single integer T, denoting the number of test cases.
The first line of each test case contains four space-separated integers A, B, X, and Y — the current floor of Chef, the current floor of Chefina, 
speed of Chef and speed of Chefina in floors per minute respectively.*/

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	float a,b,x,y;
	cin>>t;
	while(t--){
	    cin>>a>>b>>x>>y;
	    float t1=0,t2=0;
	    while(a>0){
	    t1=t1+a/x;
	    a=a-(t1*x);
	    }
	    while(b>0){
	        t2=t2+b/y;
	        b=b-(t2*y);
	    }
	    if(t1>t2)
	    cout<<"Chefina\n";
	    else if(t2>t1)
	    cout<<"Chef\n";
        else
        cout<<"Both\n";
	}
	return 0;
}

