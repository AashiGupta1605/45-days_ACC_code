#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,r1,r2,r3;
	cin>>t;
	while(t--){
	    cin>>r1>>r2>>r3;
	    int c=0;
	    if(r1>r2+r3)
	    c++;
	    if(r2>r1+r3)
	    c++;
	    if(r3>r2+r1)
	    c++;
	    if(c!=0)
	    cout<<"Yes\n";
	    else
	    cout<<"No\n";
	}
	return 0;
}

