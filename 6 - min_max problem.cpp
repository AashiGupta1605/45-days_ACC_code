/* Problem
Chef is given 3 integers A, B, and C .
Chef needs to find the value of max(A,B,C)-min(A,B,C).
*/
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,a,b,c,max,min;
	cin>>t;
	while(t!=0){
	    cin>>a>>b>>c;
	    if(a>b&&a>c){
	        max=a; 
	        if(b>c)
	        min=c;
	        else
	        min=b;
	    }
	    else if(b>c){
	        max=b;
	        if(a>c)
	        min=c;
	        else
	        min=a;
	    }
	    else{
	        max=c;
	        if(a>b)
	        min=b;
	        else
	        min=a;
	   }
	   cout<<max-min<<endl;
	    t--;
	}
	return 0;
}

