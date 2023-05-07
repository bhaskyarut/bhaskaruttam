#include<iostream.h>
#include<conio.h>
inline int fun(int a,int b)
{
	return (a>b)?a:b;
}
int main()
{
	int s;
	s=fun(12,30);
	cout<<"maximum"<<s;
}
	