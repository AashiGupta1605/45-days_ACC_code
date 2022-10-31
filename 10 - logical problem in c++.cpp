/*Problem
It is the World Cup Finals. Chef only finds a match interesting if the skill difference of the competing teams is less than or equal to D.
Given that the skills of the teams competing in the final are X and Y respectively, determine whether Chef will find the game interesting or not.
*/

#include <iostream>
using namespace std;

int main() {
	int t,x,y,d;
	cin>>t;
	while(t!=0){
	    cin>>x>>y>>d;
	    if(x>y){
	    if((x-y)<=d)
	    cout<<"Yes\n";
	    else
	    cout<<"No\n";}
	    else{
	       if((y-x)<=d)
	    cout<<"Yes\n";
	    else
	    cout<<"No\n";  
	    }
	    t--;
	}
	return 0;
}

