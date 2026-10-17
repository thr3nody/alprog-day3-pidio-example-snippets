#include <iostream>
#include <bitset>

int main()
{
	using std::cout;
	using std::bitset;

	int n = 10; // assign literal 10 to variable n
	cout << "n = 10   -> " << n << "\n";

	n += 5;
	cout << "n += 5   -> " << n << "\n"; // 5 (n = n + 5)
	n -= 3;
	cout << "n -= 3   -> " << n << "\n"; // 12 (n = n - 3)
	n *= 2;
	cout << "n *= 2   -> " << n << "\n"; // 24 (n = n * 2)
	n /= 4;
	cout << "n /= 4   -> " << n << "\n"; // 6 (n = n / 4)
	n %= 4;
	cout << "n %= 4   -> " << n << "\n"; // 2 (n = n % 4)

	// compound bitwise assignments
	unsigned char v = 0b00001100; // 12
	cout << "start    : " << bitset<8>(v) << "\n";

	// 00001100
	v <<= 2;
	cout << "v <<= 2  : " << bitset<8>(v) << "\n";
	// 00110000 (shift left 2)

	v >>= 1;
	cout << "v >>= 1  : " << bitset<8>(v) << "\n";
	// 00011000 (shift right 1)

	v &= 0b00001111;
	cout << "v &= 0x0F: " << bitset<8>(v) << "\n";
	// 00001000 (keep low 4 bits)

	v |= 0b00000011;
	cout << "v |= 0x03: " << bitset<8>(v) << "\n";
	// 00001011 (set bits 0 and 1)

	v ^= 0b00000101;
	cout << "v ^= 0x05: " << bitset<8>(v) << "\n";
	// 00001110 (toggle bits 0 and 2)
}
