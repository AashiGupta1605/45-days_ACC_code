/*Problem
Hackerman wants to know who is the better player between Bob and Alice with the help of a game.

The game proceeds as follows:

First, Alice throws a die and gets the number A
Then, Bob throws a die and gets the number B
Alice wins the game if the sum on the dice is a prime number; and Bob wins otherwise.*/

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,a,b,s;
	cin>>t;
	while(t--){
	    int c=0;
	    cin>>a>>b;
	    s=a+b;
	    for(int i=2;i<s;i++){
	        if(s%i==0)
	        c++;
	    }
	    if(c==0)
	    cout<<"Alice\n";
	    else
	    cout<<"Bob\n";
	}
	return 0;
}

