#include<iostream.h>
#include<conio.h>
using namespace std;
class A
{
	int n,count;
	public:
	void input()
	{
		cout<<" enter any number ";
		cin>>n;
	}
	void output()
	{
		for(int i=1;i<=n;i++)
		{
			if(n%i==0)
			{
				count++;
			}
		}
		if(count==2)
		cout<<"prime number";
		else
		cout<<"not prime";
	}
};
void main()
{
A obj;
obj.input();
obj.output();
getch();
}