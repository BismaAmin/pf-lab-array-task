#include<iostream>
using namespace std;
int fehconvert(int n);
int main()
{
	int c;
	float convertedval;
	cout<<"enter temperature in celsius= ";
	cin>>c;
	cout<<"ur temperature in celsius is ="<<c<<endl;
	fehconvert(c);
	convertedval=fehconvert(c);
	cout<<"ur tenperautre in feherenheit is = "<<convertedval;
	return 0;
}
int fehconvert(int n)
{
	float feh;
	feh= (n*9/5)+32;
	return feh;
}

