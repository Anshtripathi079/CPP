#include <iostream>  
using namespace std;  
int main ()  
{  
// dynamically allocate memory to a variable 
int *b = new int;
*b = 10;
cout<<*b<<endl;

// dynamically allocate memory to array
int n;
cout<<"Enter size of array: "<<endl;
cin>>n;

int *arr = new int(n);
for(int i=0;i<n;i++){
    cin>>arr[i];
}
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
delete []arr;
delete b;
return 0;  
}  