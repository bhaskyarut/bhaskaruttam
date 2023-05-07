#include<iostream.h>
using namespace std;
int main()
{
	int i,j,num=65;
	char ch;
	for(int i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			ch=char(num);
			cout<<ch;
			num++;
		}
		cout<<endl;
	}
		return 0;
	
}