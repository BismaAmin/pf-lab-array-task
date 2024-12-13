#include<iostream>
using namespace std;
int main()
{
	int r,c,i,j;
	int num[10][10];
	cout<<"enter num for row=";
	cin>>r;
	cout<<"enter num for column=";
	cin>>c;
	num[r][c];
	cout<<"enter num=";
	for(i=0;i<r;i++)
	{
	   for(j=0;j<c;j++)
	   {
	   	cin>>num[i][j];
	   }
    }  
    
    for(i=0;i<r;i++)
	{
	   for(j=0;j<c;j++)
	   {
	   	cout<<num[i][j]<<"\t";
	   }
	   cout<<endl;
    }  
    
    
    cout<<"the transpose is="<<endl;
    for(i=0;i<r;i++)
	{
	   for(j=0;j<c;j++)
	   {
	   	cout<<num[j][i]<<"\t";
	   }
	   cout<<endl;
    }  
    return 0;
}
    