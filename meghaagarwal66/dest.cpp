#include<iostream>
using namespace std;
int c=0;
class sample
{
	public:
	sample()
	{
		cout<<"\nI am object "<<++c;
	}
	~sample()
	{
		cout<<endl<<c--;
	}
};
main()
{
	sample s1,s2,s3;
	cout<<"\n";
	sample s4;
}
