/* Ques - Chef decides to solve at least 10 problems every week for 4 weeks.
Given the number of problems he actually solved in each week over 4 weeks as P1, P2, P3 and P4 , output the number of weeks in which Chef met his target.

Input Format
There is a single line of input, with 4 integers P1, P2, P3 and P4 
These are the number of problems solved by Chef in each of the 4 weeks.

Output Format
Output a single integer in a single line - the number of weeks in which Chef solved at least 10 problems.

Sample 1:
Input:
12 15 8 10
Output:
3
Explanation:
Chef solved at least 10 problems in the first, second and fourth weeks. He failed to solve at least 10 problems in the third week. Hence, the number of weeks in 
which Chef met his target is 3.                 */

#include <iostream>
using namespace std;

int main() {
	int num=0,arr[4];
	cout<<"Four Inputs : ";
	for(int i=0;i<4;i++){
	    cin>>arr[i];
	    if(arr[i]>=10)
	    num++;
	}
	cout<<"Result : "<<num<<" weeks.";
	return 0;
}

