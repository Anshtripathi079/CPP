### Namespaces in c++

Consider a situation, when we have two persons with the same name, Zara, in the same class. Whenever we need to differentiate them definitely we would have to use some additional information along with their name, like either the area, if they live in different area or their mother’s or father’s name, etc.

Same situation can arise in your C++ applications. For example, you might be writing some code that has a function called xyz() and there is another library available which is also having same function xyz(). Now the compiler has no way of knowing which version of xyz() function you are referring to within your code.

A namespace is designed to overcome this difficulty and is used as additional information to differentiate similar functions, classes, variables etc. with the same name available in different libraries. Using namespace, you can define the context in which names are defined. In essence, a namespace defines a scope.

### Defining a Namespace
A namespace definition begins with the keyword namespace followed by the namespace name as follows −

```CPP
namespace namespace_name {
   // code declarations
}
```

To call the namespace-enabled version of either function or variable, prepend (::) the namespace name as follows −

```cpp
name::code;  // code could be variable or function.
```

Let us see how namespace scope the entities including variable and functions −
```cpp
#include <iostream>
using namespace std;

// first name space
namespace first_space {
   void func() {
      cout << "Inside first_space" << endl;
   }
}

// second name space
namespace second_space {
   void func() {
      cout << "Inside second_space" << endl;
   }
}

int main () {
   // Calls function from first name space.
   first_space::func();
   
   // Calls function from second name space.
   second_space::func(); 

   return 0;
}
```
If we compile and run above code, this would produce the following result −
```cpp
Inside first_space
Inside second_space
```

### The using directive
You can also avoid prepending of namespaces with the using namespace directive. This directive tells the compiler that the subsequent code is making use of names in the specified namespace. The namespace is thus implied for the following code −

```cpp
#include <iostream>
using namespace std;

// first name space
namespace first_space {
   void func() {
      cout << "Inside first_space" << endl;
   }
}

// second name space
namespace second_space {
   void func() {
      cout << "Inside second_space" << endl;
   }
}

using namespace first_space;
int main () {
   // This calls function from first name space.
   func();
   
   return 0;
}
```
If we compile and run above code, this would produce the following result −
```
Inside first_space
```