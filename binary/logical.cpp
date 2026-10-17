#include <iostream>

int main()
{
	using std::cout;

	bool t{ true }, f{ false };
	cout << "t && f = " << (t && f) << "\n"; // false: both must be true
	cout << "t || f = " << (t || f) << "\n"; // true:  at least one true
	cout << "!t     = " << (!t) << "\n"; // false: flips the value

	constexpr bool isAGoodPerson{ true };
	if (!isAGoodPerson) {
		cout << "Good person." << '\n';
	}
}
