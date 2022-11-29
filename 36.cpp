/*Problem
Chef is trying to solve a problem having TT test cases, where, for each test case he is given a single integer NN.

Chef has an algorithm which takes exactly N^2N 
2
  iterations for a test case with value NN.

The constraints of the problem are as follows:

1 \leq T \leq maxT1=T=maxT
1 \leq N \leq maxN1=N=maxN
Sum of NN over all test cases does not exceed sumNsumN.
Given the values maxT, maxN,maxT,maxN, and sumNsumN, determine the maximum number of iterations Chef's algorithm can take for any valid input file satisfying all the constraints.

Formally speaking, find the maximum value of N_1^2 + N_2^2 + \dots + N_T^2*/

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

