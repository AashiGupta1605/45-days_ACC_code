/*Problem
Mario was going to gift Princess Peach a string SS of even length N.

Mario was clumsy and thus, broke the string in the middle. He now has two strings A and B such that A = S[1,N/2] and B = S[N/2 + 1, N]

Mario is not sure about the order in which he should join the strings A and B to get the string S. Thus, he joins the strings in any random order. 
Find whether it is guaranteed that Mario will get the same string S if he joins the strings A and B in any order.*/

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n;
	cin>>t;
	while(t!=0){
	    cin>>n;
	    string s,a,b;
	    int c=0,j=n/2;
	    cin>>s;
	    for(int i=0;i<n/2;i++)
	    a[i]=s[i];
	    for(int i=0;i<n/2;i++){
	    b[i]=s[j];
	    j=j+1;
	    }
	    for(int i=0;i<n/2;i++){
	    if(a[i]!=b[i])
	    c++;
	    }
	    if(c==0)
	    cout<<"YES\n";
	    else
	    cout<<"NO\n";
	    t--;
	}
	return 0;
}

