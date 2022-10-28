/*Problem
Chef is currently standing at stair 0 and he wants to reach stair numbered X.
Chef can climb either Y steps or 1 step in one move.
Find the minimum number of moves required by him to reach exactly the stair numbered X.

Input Format
The first line of input will contain a single integer T, denoting the number of test cases.
Each test case consists of a single line of input containing two space separated integers X and Y denoting the number of stair Chef wants to reach and the 
number of stairs he can climb in one move.
*/
#include <iostream>
using namespace std;

int main() {
	int t,x,y,a;
	cin>>t;
	while(t!=0){
	    cin>>x>>y;
	    if(x>0){
	        a=x%y;
	        if(a==0)
	        cout<<x/y<<endl;
	        else{
	            if(y>x)
	            cout<<a/1<<endl;
	            else
	            cout<<(x/y)+(a/1)<<endl;
	        }
	    }
	    else
	    cout<<"0\n";
	    t--;
	}
	return 0;
}

