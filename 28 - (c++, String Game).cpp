/*Problem
Alice and Bob are playing a game. They have a common string SS of length NN. The players also have their individual strings AA (belonging to Alice) and BB (belonging to Bob) which are empty in the beginning. Game begins with Alice and both players take alternate turns.

In her/his turn, the player picks a single character from string SS, adds it to the end of their individual string and deletes the picked character from string SS.

The game continues until string SS is empty. Find whether there exists a sequence of moves such that the strings AA and BB are same at the end of the game.

Input Format
The first line of input will contain a single integer TT, denoting the number of test cases.
Each test case consists of multiple lines of input.
The first line of each test case contains an integer NN — the length of the string.
The next line contains the strings SS consisting of lowercase english alphabets.*/

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n;
	cin>>t;
	while(t--){
	    cin>>n;
	    char s[n],tmp;
	    int c2=0;
	    for(int i=0;i<n;i++)
	        cin>>s[i];
	    for(int i=0;i<n;i++){
	        tmp=s[i];
	        int c=0;
	        for(int j=0;j<n;j++){
	            if(tmp==s[j])
	            c++;
	        }
	        if(c%2==0)
	        c2++;
	    }
	    if(c2==n)
	    cout<<"Yes\n";
	    else
	    cout<<"No\n";
	}
	return 0;
}

