/*Chef is a software developer, so he has to switch between different languages sometimes. Each programming language has some features, which are represented 
by integers here.
Currently, Chef has to use a language with two given features A and B. He has two options --- switching to a language with two features A1 and B1
or to a language with two features A2 and B2 .
All four features of these two languages are pairwise distinct.

Tell Chef whether he can use the first language, the second language or neither of these languages (if no single language has all the required features).

Input Format
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
The first and only line of each test case contains six space-separated integers A, B, A_1, B_1, A_2, B_2. 

Output Format
For each test case, print a single line containing the integer 1 if Chef should switch to the first language, or 2 if Chef should switch to the second language,
or 0 if Chef cannot switch to either language.*/

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,a,b,a1,b1,a2,b2;
	cin>>t;
	while(t--){
	    cin>>a>>b>>a1>>b1>>a2>>b2;
	    int c=0;
	    if((a==a1&&b==b1)||(a==b1&&b==a1)){
	    cout<<"1"<<endl;c++;}
	    if((a==a2&&b==b2)||(a==b2&&b==a2)){
	    cout<<"2"<<endl;c++;}
	    if(c==0)
	    cout<<"0"<<endl;
	}
	return 0;
}

