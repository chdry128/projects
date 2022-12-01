#include<iostream>
using namespace std;
int main()
{int i,j,sum[2][2];
	int a[2][2]={{1,2},{3,4}};
	int b[2][2]={{1,2},{3,4}};
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
		
			sum[i][j]=a[i][j]+b[i][j];
		}
	}

	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			cout<<sum[i][j];
			cout<<" ";
		
		}
		cout<<"\n";
	}

	return 0;
}
