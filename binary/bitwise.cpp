#include <iostream>
#include <bitset>

int main()
{
	using std::cout;
	using std::bitset;

	unsigned char a = 0b00001100; // 12
	unsigned char b = 0b00001010; // 10

	cout << "a      = " << bitset<8>(a) << "\n";
	cout << "b      = " << bitset<8>(b) << "\n";

	cout << "a & b  = " << bitset<8>(a & b)
	     << "  (1 only where both are 1)\n";
	// 00001000

	cout << "a | b  = " << bitset<8>(a | b) << "  (1 where either is 1)\n";
	// 00001110

	cout << "a ^ b  = " << bitset<8>(a ^ b) << "  (1 where they differ)\n";
	// 00000110

	cout << "~a     = " << bitset<8>(static_cast<unsigned char>(~a))
	     << "  (flip every bit)\n";

	// 00001100 *
	// 00001010 *
	// 11110011

	cout << "a << 2 = " << bitset<8>(a << 2) << "  (same as a * 4)\n";
	// 00110000

	cout << "a >> 2 = " << bitset<8>(a >> 2) << "  (same as a / 4)\n";
	// 00000011
}
