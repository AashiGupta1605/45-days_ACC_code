Chef and Chefina are residing in a hotel.
There are 10 floors in the hotel and each floor consists of 10 rooms.
Floor 1 consists of room numbers 1 to 10.
Floor 2 consists of room numbers 11 to 20.

Floor i consists of room numbers 10·(i-1)+1 to 10·i.
You know that Chef's room number is X while Chefina's Room number is Y.
If Chef starts from his room, find the number of floors he needs to travel to reach Chefina's room.

#include <iostream>
using namespace std;

int main() {
	int t,x,y,a,b;
	cin>>t;
	while(t!=0){
	    cin>>x>>y;
	    if(x<10)
	    a=1;
	    else{
	        a=x/10;
	        if(x%10==0&&x<100)
	        a=a-1;
	    }
	    if(y<10)
	    b=1;
	    else{
	        b=y/10;
	        if(y%10==0&&y<100)
	        b=b-1;
	    }
	    if(a>b)
	    cout<<a-b<<endl;
	    else
	    cout<<b-a<<endl;
	    t--;
	}
	return 0;
}

