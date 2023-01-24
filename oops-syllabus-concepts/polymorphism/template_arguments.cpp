// non-type arguments
// The template can contain multiple arguments, and we can also use the non-type arguments In addition to the type T argument, we can also use other types of arguments such as strings, function names, constant expression and built-in types.

// template<class T, int size>  // here we are taking size as arguments which is of int type.
// class array  
// {  
//         T arr[size];           // automatic array initialization.  
// };  

// whole program example

#include <iostream>  
using namespace std;  
template<class T, int size>  
class A   
{  
    public:  
    T arr[size];  
    void insert()  
    {  
        int i =1;  
        for (int j=0;j<size;j++)  
        {  
            arr[j] = i;  
            i++;  
        }  
    }  
      
    void display()  
    {  
        for(int i=0;i<size;i++)  
        {  
            std::cout << arr[i] << " ";  
        }  
    }  
};  
int main()  
{  
    A<int,10> t1;  // passing size as 10
    t1.insert();  
    t1.display();  
    return 0;  
}  