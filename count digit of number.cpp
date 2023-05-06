/*  
******
******
******
 following pattern */

#include<iostream.h>
using namespace std;
int main()
{
	int i,j,n;
	cout<<"enter the number of row..=";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=6;j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}return 0;
}