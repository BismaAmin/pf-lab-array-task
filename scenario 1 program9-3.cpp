#include<iostream>
#include<string>
using namespace std;
int main()
{
	string username[20];
	int totaluser=10,n;
	int ticketprice=100, popcornprice=200;
	int totalprice=0;
	cout<<"how many user attend the event=";
	cin>>n;
	if(n>totaluser)
	{
	cout<<"error: not more user allowed";
    }
	else
	{
		for(int i=0;i<n;i++)
		{
		cout<<"enter name for user"<<i+1<<endl;
		cin>>username[i];
	    }
	    for(int i=0;i<n;i++)
	    {
	    	cout<<"user 1 : "<<username[i]<<endl;
		}
    for(int i=0;i<n;i++)
	{
	cout<<username[i]<<" "<<"ticketprice="<<ticketprice<<" "<<"popcornprice="<<popcornprice<<"\t"<<"total for u is="<<ticketprice+popcornprice<<endl;
	totalprice=totalprice+ticketprice+popcornprice;
    }
    cout<<"totalprice="<<totalprice;
    }
    return 0;
}