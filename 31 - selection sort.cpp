/*Insertion Sort*/

#include <iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter no. of elements you want to enter : ";
	cin>>n;
	int a[n];
	cout<<"Enter Elements : \n";
	for(int i=0;i<n;i++)
	cin>>a[i];
	for(int i=0;i<n;i++){
		for(int j=0;j<=i;j++){
			if(a[i]<a[j]){
			a[i]=a[i]+a[j];
			a[j]=a[i]-a[j];
			a[i]=a[i]-a[j];	
			}		
		}
	}
	cout<<"Sorted List : \n";
	for(int i=0;i<n;i++)
	cout<<a[i]<<endl;
	return 0;
}
