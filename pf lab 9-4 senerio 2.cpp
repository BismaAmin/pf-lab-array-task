#include<iostream>
#include<string>
using namespace std;
int main()
{
	int entryfee=300, snackcost=200, n, totalcost=0;
	string username[20];
	int maxuser=15;
	cout<<"how many students will attend the game night? = ";
	cin>>n;
	if(n>maxuser)
	{
		cout<<"error: not more students are allowed";
	}
	else
	{
		for(int i=0;i<n;i++)
		{
		cout<<"enter name for student "<<i+1<<" :  "<<endl;
		cin>>username[i];
	    }
	for(int i=0;i<n;i++)
	{
	    cout<<"student"<<i+1<<" : "<<" "<<username[i]<<endl;
    }
	for(int i=0;i<n;i++)
	{
	    	cout<<username[i]<<" "<<"entry fee = "<<entryfee<<" "<<" snackcoast = "<<snackcost<<"\t"<<"your total price is= "<<entryfee+snackcost<<endl;
	    	totalcost= totalcost+entryfee+snackcost;
	}
		cout<<"the total cost= "<<totalcost;
    }
    return 0;
}
	