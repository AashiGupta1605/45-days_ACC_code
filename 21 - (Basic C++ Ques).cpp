/*Problem
Given n (n is even), determine the number of black cells in an n times n×n chessboard.

Input Format
The only line of the input contains a single integer n.

Output Format
Output the number of black cells in an n times n×n chessboard.*/

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	cout<<(n*n)/2<<endl;
	return 0;
}

