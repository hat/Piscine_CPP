# PISCINE CPP

## reference guides
[cplusplus.com](http:://cplusplus.com)

## namespaces
namespaces are scopes. You can have the same varaible name in separate

namespaces as they are in two different scopes.

:: scope resolution operator

## stdio streams
std::cout << redirects to stdout

std::cin >> buff reads from stdin to buff variable

std::endl creates newline

## class and instance
style guide class starts with Capital letter

each class needs a .hpp file and a .cpp file

style for each is name.class.cpp/.hpp

.hpp is for declarations .cpp is for definitions

each class has public and private class functions and variables

```cpp
class Sample {
public:
	Sample(void);
	~Sample(void);
};
```
cppSample( void ) is constructor

~Sample( void ) is deconstructor

constructor and deconstructor have no return type. type return; to show end

call a class the same way you call a namespace with ::

declare a class '''Sample instance;'''

## member attributes and member functions
use . to reference member attributes and functions

## this
this-> current instance of class

### DAY 00
get an int with cin and check validity:
	```cplusplus
	std::cout << "Index to view all information: ";
	std::cin >> searchIndex;
	std::cin.ignore();
	if (searchIndex < newContact[0].getNumEntries())
		newContact[searchIndex].getAllInfo();
	else
	{
		if (!std::cin)
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}
		std::cout << "Invalid index" << std::endl;
	}
	```


### DAY 01
####Stack and Heap
to allocate in the heap use the keyword *new

```cpp
	int *ptr = new int; // ptr is assigned 4 bytes in the heap
	int *array = new int[10]; // array is assigned 40 bytes in the heap
``

When a dynamically allocated variable is deleted the memory is returned to the
heap to be reassigned

can be deleted with keyword delete

Advantages of Heap:
	stays until application ends or deallocated
	big pool of memory for large storage

Disadvantages of Heap:
	comparatively slow
	must be accessed through a pointer

Stack - where all the cuntions and parameters, local variables, current position
are located

Stack is in order - can look at top item (top or peek), take off top item (pop)
or put a new item on the top (push)

```cpp
	int foo(int x)
	{
		    // b
			    return x;
	} // foo is popped off the call stack here
	 
	int main()
	{
		// a
		foo(5); // foo is pushed on the call stack here
		// c
					  
		return 0;
	 }
```

Advantages of Stack:
	fast

Disadvantages of Stack:
	not much storage space

####REFERENCES

references are like a non void constant.

references are declared as int& ref = num;

const - keyword to make variable unmodifiable
**same as define

weapon that won't always be there.
can't reference unless it's created.
need a pointer.
can't reference what may not exist.

