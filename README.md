# CPP-Default-Argument
How to manage default arguments in C++ functions

In C++ programming, you can provide default values for function parameters. The idea behind default argument is very simple. If a function is called by passing argument/s, those arguments are used by the function. But if all argument/s are not passed while invoking a function then, the default value passed to arguments are used. Default value/s are passed to argument/s in function prototype. Working of default argument is demonstrated in the figure below:
![untitled](https://user-images.githubusercontent.com/41892175/46570579-ce690080-c998-11e8-8718-9046b73236d5.jpg)

## Example: Default Argument
```
/* C++ Program to demonstrate working of default argument */ 

#include <iostream> 
using namespace std; 

void display(char = '*', int = 1); 

int main() { 
  cout<<"No argument passed:\n"; 
  display(); 
  
  cout<<"\n\nFirst argument passed:\n"; 
  display('#'); 
  
  cout<<"\n\nBoth argument passed:\n"; 
  display('$', 5);
  
  system("pause"); 
  return 0; 
} 

void display(char c, int n){ 
  for(int i = 1; i <=n; ++i) { 
    cout<<c; 
  } 
  cout<<endl; 
}
```

### Output
```
No argument passed:
*


First argument passed:
#


Both argument passed:
$$$$$
```

In the above program, you can see default value passed to arguments (in function prototype). At first, display( ) function is called without passing any arguments. In this case, default( ) function used both default arguments. Then, the function is called using only first argument. In this case, function does not use first default value assigned. Instead function uses the actual parameter passed as first argument and takes default value(second value in function prototype) as it's second argument. When display( ) is invoked passing both arguments, default arguments are not used.

#### Note:
The missing argument must be the last argument of the list, that is, if you are passing only one argument in the above function, it should be the first argument.
