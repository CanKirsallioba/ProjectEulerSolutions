/*


The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.

Find the sum of all the primes below two million.

*/

#include <iostream>
#include <cmath>
using namespace std;

int cur = 0;
int* primes = new int[2000000];
long long int sum = 0LL;

bool isPrime (int n);

int main () {
    for (int n = 2; n<2000000 ;n++) {
        if (isPrime(n)) {
            sum = sum + n;
        }
    }

    cout << sum << endl;
}


bool isPrime (int n) {
    
    for (int p = 0; p < cur && primes[p] <= sqrt((double)n); p++)
		if (n % primes[p] == 0)
			return false;
	return true;

}
