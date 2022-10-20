#include<iostream>
using namespace std;
int main()
{
	int a[3],b[3],c[3],i;
	cout<<"enter the elements of first array \n";
	for(i=0;i<3;i++)
	{
		cout<<"enter the "<< i+1 <<" elements";
		cin>>a[i];
	}
	cout<<"enter the elements of second array \n";
	for(i=0;i<3;i++)
	{
		cout<<"enter the "<< i+1 << " elements";
		cin>>b[i];
	}
	for(i=0;i<3;i++)
	{
		c[i]=a[i]+b[i];
	}
	cout<<"the sum of elements of array are\n";
	for(i=0;i<3;i++)
	{
		cout<<"\n"<<c[i]<<"\n";
	}
	return 0;
}
