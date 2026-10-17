#include <iostream>

int main()
{
	using std::cout;

	int x{ 5 };
	int y{ 5 };

	cout << "+x   = " << +x << "\n"; // unary plus, makes a value positive
	cout << "-x   = " << -x << "\n"; // unary minus, makes a value negative

	// Prefix: change first, then use the new value
	int r1{ ++x };
	cout << "++x  = " << r1 << "  (x is now " << x << ")\n"; // 6, 6
	int r2{ --y };
	cout << "--y  = " << r2 << "  (y is now " << y << ")\n"; // 4, 4

	// Postfix: use the old value, then change
	int r3{ y++ };
	cout << "y++  = " << r3 << "  (y is now " << y << ")\n"; // 4, then 5
	int r4{ y-- };
	cout << "y--  = " << r4 << "  (y is now " << y << ")\n"; // 5, then 4
}
