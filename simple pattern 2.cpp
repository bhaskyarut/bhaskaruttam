#include<iostream.h>
using namespace std;
int main()
{
	int i,j;
	int n=4;
	for(int i=1;i<=n;i++)
	{
		for(j=n;j>=1;j--)
		{
			if(i>=j)
			cout<<" *";
			else
			cout<<" ";
		}
		cout<<endl;
	}
	return 0;
}