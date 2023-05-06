/* sum of naturali n number */

#include<iostream.h>
using namespace std;
int main()
{
	int n,sum=0;
	cout<<" enter the last value ";
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		sum=sum+i;
	}
	cout<<sum<<"sum is given number"<<endl;
	return 0;
}