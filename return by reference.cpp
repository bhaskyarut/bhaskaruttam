#include<iostream.h>
#include<conio.h>
int main(void )
{
	int &min(int &,int&);
	int val1,val2;
	clrscr();
	cout<<"enter the value 1";
	cin>>val1;
	cout<<"enter the value 2 ";
	cin>>val2;
	min(val1,val2)=0;
	cout<<"after a calling min() function"<<endl;
	cout<<"vak1 is "<<val1<<endl;
	cout<<"val2 is "<<val2<<endl;
	getch();
	return (0);
}
int &min(int &val1,int &val2)
{
	if(val1<val2)
	  return val1 ;
	  
	 else
	    return val2;
}