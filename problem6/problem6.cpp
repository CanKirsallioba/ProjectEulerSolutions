/*
The sum of the squares of the first ten natural numbers is,
12+22+...+102=385

The square of the sum of the first ten natural numbers is,
(1+2+...+10)2=552=3025

Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025−385=2640

.

Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
*/

#include <iostream>
using namespace std;


int main () {
    long long int sumofsquares = 0LL;
    long long int squareofsums = 0LL;

    for (int i = 1; i <= 100; i++) {
        sumofsquares = sumofsquares + (i*i);

        squareofsums = squareofsums + i;
       
    }

    squareofsums = squareofsums * squareofsums;


    cout << "square of sums " << squareofsums << endl;
    cout << "sum of squares " << sumofsquares << endl;

    cout << "difference : " << squareofsums - sumofsquares << endl;
}