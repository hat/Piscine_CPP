/*=============================================================================
 * Project: My First Conical Class
 *
 * Program: Fixed point number conical class implementation
 *
 * Author: Tony Hendrick
 * ==========================================================================*/

#include <iostream>
#include "Fixed.class.hpp"

int main( void ) {
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;

	std::cout << "=========================" << std::endl;
	std::cout << "=========================" << std::endl;
	std::cout << "|         TESTS         |" << std::endl;
	std::cout << "=========================" << std::endl;
	std::cout << "=========================" << std::endl;

	Fixed testA(5);
	Fixed testB(10);
	Fixed c((float)1.22);
	Fixed d((float)1.223);

	std::cout << testA << " > " << testB << " = " << (testA > testB) << std::endl;
	std::cout << testA << " < " << testB << " = " << (testA < testB) << std::endl;
	std::cout << testA << " >= " << testB << " = " << (testA >= testB) << std::endl;
	std::cout << testA << " <= " << testB << " = " << (testA <= testB) << std::endl;
	std::cout << testA << " == " << testB << " = " << (testA == testB) << std::endl;
	std::cout << testA << " != " << testB << " = " << (testA != testB) << std::endl;

	std::cout << testA << " + " << testB << " = " << (testA + testB) << std::endl;
	std::cout << testA << " - " << testB << " = " << (testA - testB) << std::endl;
	std::cout << testA << " * " << testB << " = " << (testA * testB) << std::endl;
	std::cout << testA << " / " << testB << " = " << (testA / testB) << std::endl;

	std::cout << testA << "++ " << (testA++) << " = " << testA << std::endl;
	std::cout << testA << "-- " << (testA--) << " = " << testA << std::endl;
	std::cout << "++ " << testA << (++testA) << " = " << testA << std::endl;
	std::cout << "-- " << testA << (--testA) << " = " << testA << std::endl;

	std::cout << c << " > " << d << " = " << (c > d) << std::endl;
	std::cout << c << " < " << d << " = " << (c < d) << std::endl;
	std::cout << c << " >= " << d << " = " << (c >= d) << std::endl;
	std::cout << c << " <= " << d << " = " << (c <= d) << std::endl;
	std::cout << c << " == " << d << " = " << (c == d) << std::endl;
	std::cout << c << " != " << d << " = " << (c != d) << std::endl;

	std::cout << c << " + " << d << " = " << (c + d) << std::endl;
	std::cout << c << " - " << d << " = " << (c - d) << std::endl;
	std::cout << c << " * " << d << " = " << (c * d) << std::endl;
	std::cout << c << " / " << d << " = " << (c / d) << std::endl;
}