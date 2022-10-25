//There is a cricket match going on between two teams A and B.

//Team B is batting second and got a target of X runs. Currently, team B has scored Y runs. Determine how many more runs Team B should score to win the match.

#include <iostream>
using namespace std;

int main() {
	int t,x,y,r;
	cout<<"Enter no. of inputs : ";
	cin>>t;
	for(int i=0;i<t;i++){
		cout<<"Enter Scores : ";
	    cin>>x>>y;
	    if(x>=y)
	    {
	    	 r=x-y;
	    	cout<<"Team B have to score "<<r+1<<" runs."<<endl;//Note: The target score in cricket matches is one more than the number of runs scored by the team that batted first.
		}
	    else
	    cout<<"Invalid Input\n";
	}
	return 0;
}

