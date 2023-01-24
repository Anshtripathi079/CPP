#include<iostream>
using namespace std;
int main()
{
	int a,b,c,max;
	cout<<"Enter values of a, b and c repectively\n";
	cin>>a>>b>>c;
	max=a>b?a>c?a:c:b>c?b:c;
	cout<<"The maximum of three no's is : "<<max<<endl;	
	cout<<"Name = Ansh Tripathi"<<endl<<"enrollment no = 07929802021"<<endl;
}
