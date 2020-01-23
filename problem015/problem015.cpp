/*


Starting in the top left corner of a 2×2 grid, and only being able to move to the right and down, there are exactly 6 routes to the bottom right corner.

How many such routes are there through a 20×20 grid?
*/

#include <iostream>
using namespace std;

int main () {
    long long grid[21][21] = {0};
	grid[0][0] = 1;
	for (int n = 1; n < 21; n++) {
		for (int r = 0; r <= n; r++) {
			grid[r][n] = (r>0 ? grid[r-1][n] : 0) + grid[r][n-1];
			grid[n][r] = grid[r][n];
		}
	}
	std::cout << grid[20][20] << "\n";
}