/*Problem
There are two problems in a contest.

Problem A is worth 500 points at the start of the contest.
Problem B is worth 1000 points at the start of the contest.
Once the contest starts, after each minute:

Maximum points of Problem A reduce by 2 points .
Maximum points of Problem B reduce by 4 points.
It is known that Chef requires X minutes to solve Problem A correctly and Y minutes to solve Problem B correctly.

Find the maximum number of points Chef can score if he optimally decides the order of attempting both the problems.*/

#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t!=0){
	    int x,y,a1=500,b1=1000,a2,b2,r1=0,r2=0;
	    a2=a1;b2=b1;
	    cin>>x>>y;
	    a1=a1-(2*x);
	    b1=b1-(4*(x+y));
	    r1=a1+b1;
	    a2=a2-(2*(x+y));
	    b2=b2-(4*y);
	    r2=a2+b2;
	    if(r2>r1)
	    cout<<r2<<endl;
	    else
	    cout<<r1<<endl;
	     t--;
	}
	return 0;
}

