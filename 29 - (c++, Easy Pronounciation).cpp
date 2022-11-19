/*Problem
Words that contain many consecutive consonants, like "schtschurowskia", are generally considered somewhat hard to pronounce.

We say that a word is hard to pronounce if it contains 4 or more consonants in a row; otherwise it is easy to pronounce. For example, "apple" and "polish" are 
easy to pronounce, but "schtschurowskia" is hard to pronounce.

You are given a string S consisting of N lowercase Latin characters. Determine whether it is easy to pronounce or not based on the rule above — print YES if it is easy to pronounce and NO otherwise.

For the purposes of this problem, the vowels are the characters {a,e,i,o,u} and the consonants are the other 21 characters.

Input Format
The first line of input will contain a single integer T, denoting the number of test cases.
Each test case consists of two lines of input.
The first line of each test case contains a single integer N, the length of string S.
The second line of each test case contains the string S.
Output Format
For each test case, output on a new line the answer — YES if S is easy to pronounce, and NO otherwise.*/

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n;
	cin>>t;
	while(t--){
	    cin>>n;
	    char s[n];
	    int c=0,c1=0;
	    for(int i=0;i<n;i++){
	        cin>>s[i];
	        if(s[i]!='a'&&s[i]!='e'&&s[i]!='i'&&s[i]!='o'&&s[i]!='u'){
	            c1++;
	            if(c1>=4)
	            c++;
	        }
	        else
	        c1=0;
	    }
	    if(c!=0)
	    cout<<"No\n";
	    else
	    cout<<"Yes\n";
	}
	return 0;
}

