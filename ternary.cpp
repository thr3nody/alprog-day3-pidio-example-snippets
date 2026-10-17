#include <iostream>

int main()
{
	using std::cout;

	int age{ 20 };
	cout << (age >= 18 ? "adult" : "minor") << "\n";

	int a{ 8 }, b{ 3 };
	int bigger{ (a > b) ? a : b };
	cout << "max(" << a << ", " << b << ") = " << bigger << "\n";

	int n{ -4 };
	cout << "abs(" << n << ") = " << (n < 0 ? -n : n) << "\n";

	int score{ 75 }; // nested ternary
	cout << "grade: "
	     << (score >= 90 ? 'A' :
		 score >= 70 ? 'B' :
			       'C')
	     << "\n";

	cout << "5 is " << (5 % 2 == 0 ? "even" : "odd") << "\n";
}
