/*

By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.

What is the 10 001st prime number?

*/

#include <iostream>
#include <cmath>
using namespace std;

int cur;
int* primes = new int [10000];
bool isPrime(int n);


int main () {

    for (int i = 2;;i++) {
        if (isPrime(i)) {
            if (cur == 10000) {
                cout << i << endl;
                break;
            }
            primes[cur++] = i;
        }
    }
}


bool isPrime(int n) {
    for (int p = 0; p < cur && primes[p] <= sqrt((double)n); p++)
		if (n % primes[p] == 0)
			return false;
	return true;
}