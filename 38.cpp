#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n;
	cin>>t;
	while(t--){
	    cin>>n;
	    int a[n],c=0,s=0,ts=0,odd_c=0;
	    for(int i=0;i<n;i++)
	    cin>>a[i];
	    for(int i=0;i<n;i++){
	        ts=ts+a[i];
	        if(a[i]%2!=0)
	        odd_c++;
	    }
	    if(n%2==0&&odd_c>0){
	        for(int i=0;c!=n/2;i++){
	        s=s+a[i];
	        if(s%2!=0)
	        c++;
	        else
	        s=s-a[i];
	        }
	        if(s%2!=0&&ts%2==0)
	        cout<<"Yes\n";
	        else
	        cout<<"No\n";
	    }
	    else
	    cout<<"No\n";
	}
	return 0;
}

