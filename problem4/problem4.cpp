/*

A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.

Find the largest palindrome made from the product of two 3-digit numbers.

*/

#include <iostream>
using namespace std;
#include <string>
int main () {
int largest_num=0;


    for (int i = 100; i < 1000; i++){
        for (int j = 100 ; j < 1000; j++ ) {
            int num = i*j;
            
            string str = to_string(num);

            if (str == string {str.rbegin(), str.rend()} && num > largest_num) {
                largest_num = num;
            }
        }
    }  

    cout << largest_num << endl;

} 