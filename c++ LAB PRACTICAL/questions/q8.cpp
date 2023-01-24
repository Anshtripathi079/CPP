#include<iostream> 
using namespace std;
int main()
{
	int a,b,choice,value;
	
    cout<<"enter the value of two operands\n";
	cin>>a>>b;
	while(1){
        
		cout<<endl<<"Enter operator (+,-,*,/,%) you want to perform between operands"<<endl;
		cout<<"Press 1 for addition"<<endl;
		cout<<"Press 2 for multiplication"<<endl;
		cout<<"Press 3 for division"<<endl;
		cout<<"Press 4 for remainder"<<endl;
		cout<<"Press 5 for subtraction"<<endl;
		cout<<"Press 6 for exit"<<endl;
		cin>>choice;
        if(choice!=6){
		switch(choice)
		{
			case 1:
				cout<<"the addition of "<<a<<" and "<<b<<" is "<<a+b<<endl;
				break;
			case 2:
				cout<<"the multiplication of "<<a<<" and "<<b<<" is "<<a*b<<endl;
				break;
			case 3:
				cout<<"the division of "<<a<<" and "<<b<<" is "<<a/b<<endl;
				break;	
			case 4:
				cout<<"the remainder of "<<a<<" and "<<b<<" is "<<a%b<<endl;
				break;
			case 5:
				cout<<"the subtraction of "<<a<<" and "<<b<<" is "<<a-b<<endl;
				break;
			// case 6:
            //     cout<<"You have exited the calculator"<<endl;
			// 	break;
		}
        }
        else{
            cout<<"You have exited the calculator"<<endl; 
            break;
        }
	}

cout<<"Name = Ansh Tripathi"<<endl<<"enrollment no = 07929802021"<<endl; 
return 0;  
}
