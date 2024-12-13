#include<iostream>
using namespace std;
int main()
{
	int num[3];
	cout<<"enter number=";
	for(int i=0;i<3;i++)
	   cin>>num[i];
	
	cout<<"numbers in forward order are=";
	for(int i=0;i<3;i++)
	   cout<<num[i]<<" ";
	
	cout<<endl<<"numbers in reverse order are =";
	for(int i=2;i>=0;i--)
	   cout<<num[i]<<" ";
	return 0;
}