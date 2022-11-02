/*Problem

Write a program that takes in a letterclass ID of a ship and display the equivalent string class description of the given ID. Use the table below.
Class ID	Ship Class
B or b    	BattleShip
C or c	    Cruiser
D or d   	Destroyer
F or f	    Frigate

Input
The first line contains an integer T, the total number of testcases. Then T lines follow, each line contains a character.

Output
For each test case, display the Ship Class depending on ID, in a new line.*/

#include <iostream>
using namespace std;

int main() {
	int t;
	char id;
	cin>>t;
	while(t!=0){
	    cin>>id;
	    if(id=='B'||id=='b')
	    cout<<"BattleShip\n";
	    else if(id=='C'||id=='c')
	    cout<<"Cruiser\n";
	    else if(id=='D'||id=='d')
	    cout<<"Destroyer\n";
	    else if(id=='F'||id=='f')
	    cout<<"Frigate\n";
	    t--;
	}
	return 0;
}
