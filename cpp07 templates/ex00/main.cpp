# include "whatever.hpp"

int main( void ) {
	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

	std::cout << "------------------------------" << std::endl;

	Awesome A(5);
	Awesome B(10);
	std::cout << "A = " << A << std::endl;
	std::cout << "B = " << B << std::endl;
	std::cout << "min( A, B ) = " << min( A, B ) << std::endl;
	std::cout << "max( A, B ) = " << max( A, B ) << std::endl;
	swap(A, B);
	std::cout << "A = " << A << std::endl;
	std::cout << "B = " << B << std::endl;
	return 0;
}