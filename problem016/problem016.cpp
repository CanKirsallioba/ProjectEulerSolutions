/*


2^15 = 32768 and the sum of its digits is 3 + 2 + 7 + 6 + 8 = 26.

What is the sum of the digits of the number 2^1000?

*/

#include <iostream>

using namespace std;

int main() {
    
	int num[1000] = {0};
	num[0] = 1;
	for (int n = 0; n < 1000; n++) {
		for (int m = 998; m >= 0; m--) {
			num[m] = num[m] * 2;
			num[m+1] = num[m+1] + num[m] / 10;
			num[m] = num[m] % 10;
		}
	}
	int sum = 0;
	for (int n = 0; n < 1000; n++)
		sum = sum + num[n];
	std::cout << sum << "\n";
}