/*Problem
The followers of Psycho-Helmet religion follow a peculiar calendar – a normal year contains N days. Every K-th year is a “MOB” year. 
For example, if K=4, then years 4,8,12,16… are “MOB” years. A “MOB” year contains M additional days i.e. it contains N+M days.

Given X, determine whether the day after (X-1) days from Day 1 of Year 1 falls in a “MOB” year.

Input Format
The first line of input will contain a single integer T, denoting the number of test cases.
Each test case consists of a single line containing N, M, K and X — the number of days in a normal year, the number of days in a “MOB” year,
 the number of years between two “MOB” years and the integer X.*/

#include <stdio.h>

int main() {
	// your code goes here
	int t,n,m,k,x;
	scanf("%d",&t);
	while(t--){
	    scanf("%d%d%d%d",&n,&m,&k,&x);
	    int y=0,i=0;
	    for(;i<x;i=i+n){
	        y++;
	        if(y%k==0)
	        i=i+m;
	    }
	    if(y%k==0)
	    printf("Yes\n");
	    else
	    printf("No\n");
	}
	return 0;
}

