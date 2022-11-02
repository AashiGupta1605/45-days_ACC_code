/*Problem
Chef is moving to a new house!

Unfortunately, this means he now has to pack up his things so that they can be moved too. Currently, Chef is packing up his (rather impressive) book collection into cardboard boxes.

Chef has X shelves of books, each of which contains exactly Y books. Each cardboard box can hold at most Z books.
In order to not mess up the organization of the books, Chef will also ensure that books from different shelves will not be placed in the same box.

Under these conditions, what is the minimum number of boxes needed to pack all the books?

Input Format
The first line of input will contain a single integer TT, denoting the number of test cases.
Each test case consists of one line of input, containing three space-separated integers X,Y, and Z: the values described in the statement.

Output Format
For each test case, output on a new line one integer: the minimum number of boxes needed to pack all the books.*/

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,x,y,z,a;
	cin>>t;
	while(t!=0){
	    cin>>x>>y>>z;
	    int bn=0;
	    for(int i=0;i<x;i++){
	        if(y<z||y==z)
	        bn++;
	        else
	        {
	            bn=bn+(y/z);
	            a=y%z;
	            while(a>z){
	                bn=bn+1;
	                a=a%z;
	            }
	            if(a==z||a<z)
	            bn=bn+1; 
	        }
	    }cout<<bn<<endl;
	    t--;
	}
	return 0;
}

