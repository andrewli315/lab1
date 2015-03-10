#include "lab1.h"
using namespace std;
int main()
{
	int n;
	cin>>n;
	cout<<"n = "<<n<<endl;
	if(n!=1)
	{
		if((n%2) ==1)
		{
			n = n*3 +1;
		}
		else 
		n = n/2;
	cout<<"n = "<<n<<endl;
	}
	return 0;
}
