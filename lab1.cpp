#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"please input the number n ="<<endl;

	cin>>n;

	while (n!=1)
	{
		if (n%2==1)
		{
			n=3*n+1;
			cout<<n<<" ";
		}
		if (n%2==0)
		{
			n=n/2;
			cout<<n<<" ";
		}
	}
	return 0 ;
} 

