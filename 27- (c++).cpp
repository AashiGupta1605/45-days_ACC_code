/*Problem
Abhi is a salesman. He was given two types of candies, which he is selling in N different cities.

For the prices of the candies to be valid, Abhi's boss laid down the following condition:

A given type of candy must have distinct prices in all N cities.
In his excitement, Abhi wrote down the prices of both the candies on the same page and in random order instead of writing them on different pages. 
Now he is asking for your help to find out if the prices he wrote are valid or not.

More formally, you are given an array A of size 2N. Find out whether it is possible to split A into two arrays, each of length N, such that both arrays consist 
of distinct elements.

Input Format
The first line of input will contain a single integer T, denoting the number of test cases.
Each test case consists of two lines of input.
The first line of each test case contains one integer N, denoting the number of cities
The second line contains 2N space-separated integers A_1, A_2,.....,A_2n — the elements of the array A.

Output Format
For each test case output the answer on a new line — Yes if the given array represents a valid list of prices, and No otherwise.*/

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n;
	cin>>t;
	while(t--){
	    cin>>n;
	    int a[2*n],c1,tmp,c2=0;
	    for(int i=0;i<2*n;i++)
	        cin>>a[i];
	    for(int j=0;j<2*n;j++){
	       tmp=a[j];
	       c1=0;
	       for(int i=0;i<2*n;i++){
	        if(tmp==a[i])
	        c1++;
	       }
	       if(c1>2)
	       c2++;
	   }  
	   if(c2==0)
	   cout<<"Yes\n";
	   else
	   cout<<"No\n";
	}
	return 0;
}

