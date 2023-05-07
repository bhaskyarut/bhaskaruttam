
/* sum of digit number    */
#include <iostream.h>
using namespace std;
class a
{
	int n, r, sum;

  public:
	void input()
	{
		cout << " enter any digit = ";
		cin >> n;
		{
			sum = 0;

			while (n > 0)
			{
				r = n % 10;
				sum = sum + r;
				n = n / 10;
			}
		
		cout <<"the sum of number = "<<sum<< endl;
		}
	}
	};
	void main()
	{
		a obj;
		obj.input();
	};