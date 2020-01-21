/*

The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?

*/

#include <iostream>
using namespace std;

int main () {
    long long int num = 600851475143LL;
    long long int cur = 0LL;
    long long int cur_prime = 2LL;

    while (cur < num) {
        if (num % cur_prime == 0 && cur < cur_prime) {
            cur = cur_prime;
            num = num / cur_prime;
        }
        else {
            cur_prime++;
        }
    }
    
    cout << cur << endl;
}