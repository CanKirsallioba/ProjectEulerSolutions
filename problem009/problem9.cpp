/*


A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,
a2 + b2 = c2

For example, 32 + 42 = 9 + 16 = 25 = 52.

There exists exactly one Pythagorean triplet for which a + b + c = 1000.
Find the product abc.

*/

#include <iostream>
#include <cmath>
using namespace std;


int main() {

    for (int i = 1 ; i < 1000/3; i++) {
        for (int j = i + 1; j < (1000 - i) / 2; j++) {
            int k = 1000 - i - j;

            if (i*i + j*j == k*k && i + j > k) {
                cout << i*i + j*j + k*k << endl;
            }
        }
    }

}


