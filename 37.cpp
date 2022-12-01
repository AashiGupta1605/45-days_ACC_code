#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,max_t,max_n,sum_n;
	cin>>t;
	while(t--){
	    cin>>max_t>>max_n>>sum_n;
	    int r=0,c=0;
	    for(int i=sum_n;i!=0;i=i-max_n){
	        c++;
	        if(c<=max_t){
	             if(i>max_n)
	             r=r+(max_n*max_n);
	             else
	             r=r+(i*i);
	        }
	    }
	    cout<<r<<endl;
	}
	return 0;
}

