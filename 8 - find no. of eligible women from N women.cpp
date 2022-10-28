/*Problem
After the phenomenal success of the 36th Chamber of Shaolin, San Te has decided to start 37th Chamber of Shaolin. The aim this time is to equip women with 
shaolin self-defence techniques.
The only condition for a woman to be eligible for the special training is that she must be between 10 and 60 years of age, inclusive of both 10 and 60.

Given the ages of N women in his village, please help San Te find out how many of them are eligible for the special training.

Input Format
The first line of input contains a single integer T, denoting the number of test cases. The description of T test cases follows.
The first line of each test case contains a single integer N, the number of women.
The second line of each test case contains N space-separated integers A_1, A_2,..., A_N, the ages of the women.*/

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n;
	cin>>t;
	while(t!=0){
	    cin>>n;
	    int a[n],c=0;
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	        if(a[i]<=60&&a[i]>=10)
	        c=c+1;
	    }
	    cout<<c<<endl;
	    t--;
	}
	return 0;
}

