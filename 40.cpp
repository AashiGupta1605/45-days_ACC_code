/*Problem
You are given an array A = [A_1, A_2,...., A_N]
Is it possible to partition A into two non-empty subsequences S_1 and S_2, such that sum(S_1) x sum(S_2) is odd?
Here, sum(S_1) and sum(S_2) is defined similarly.

Note: S_1 and S_2 must partition A, that is must be non-empty
Every element of A must be in either S_1 or S_2 must be disjoint (in terms of which indices their subsequences represent)
  
Input Format
The first line of input will contain a single integer T, denoting the number of test cases.
Each test case consists of 2 lines of input.
The first line of each test case contains a single integer N, the size of the array.
The next line contains N space-separated integers A_1, A_2,...., A_N the elements of the array.

Output Format
For each test case, print on a new line the answer: YES if the array can be partitioned into two subsequences satisfying the condition, and NO otherwise.
Each character of the output may be printed in either uppercase or lowercase, i.e, YES, yes, YEs, and yEs will all be treated as equivalent.*/

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,count=0;
        cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    for(int i=0;i<n;i++){
	        if(arr[i]%2!=0){
	            count++;
            }    
	    }
	    if(count%2==0&&count>=2){
	        cout<<"YES"<<endl;
	    }else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
