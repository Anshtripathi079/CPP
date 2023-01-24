#include<iostream>
using namespace std;
int main()
{
	int n,r,d=0,t;
	cout<<"Enter the three digit no to check for armstrong\n";
	cin>>n;
	t=n;
	while(n!=0)
	{
		r=n%10;
		d+=r*r*r;
		n=n/10;
	}
	if(t==d)
		cout<<t<<" is armstrong no";
	else
		cout<<t<<" is not armstrong no";
	cout<<"\nName = Ansh Tripathi"<<endl<<"enrollment no = 07929802021"<<endl;
    return 0;
}
