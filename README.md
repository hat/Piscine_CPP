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

