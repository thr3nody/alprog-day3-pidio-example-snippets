#include <iostream>

int main()
{
	using std::cout;

	int a{ 17 }, b{ 5 };
	cout << a << " + " << b << " = " << a + b << "\n"; // 22
	cout << a << " - " << b << " = " << a - b << "\n"; // 12
	cout << a << " * " << b << " = " << a * b << "\n"; // 85
	cout << a << " / " << b << " = " << a / b << "\n"; // 3
	cout << a << " % " << b << " = " << a % b << "\n"; // 2

	// Dividing doubles keeps the fraction
	cout << "17.0 / 5 = " << 17.0 / 5 << "\n"; // 3.4
}
