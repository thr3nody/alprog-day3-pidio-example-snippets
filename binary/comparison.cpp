#include <iostream>

int main()
{
	using std::cout;

	int a{ 7 }, b{ 10 };
	cout << a << " >  " << b << " = " << (a > b) << "\n"; // false
	cout << a << " <  " << b << " = " << (a < b) << "\n"; // true
	cout << a << " == " << b << " = " << (a == b) << "\n"; // false
	cout << a << " != " << b << " = " << (a != b) << "\n"; // true
	cout << a << " >= " << b << " = " << (a >= b) << "\n"; // false
	cout << a << " <= " << b << " = " << (a <= b) << "\n"; // true
}
