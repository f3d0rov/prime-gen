
#include <iostream>
#include <vector>
#include <cmath>

int main() {
	unsigned long long x = 2;
	std::vector <unsigned long long> primes;

	std::ios::sync_with_stdio(false);

	while (true) {
		bool isPrime = true;
		
		for (auto i: primes) {
			if (x % i == 0) {
				isPrime = false;
				break;
			}

			if (sqrt(x) < i) {
				break;
			}
		}

		if (isPrime) {
			primes.push_back(x);
			std::cout << primes.size() << ": \t" << x << "\n";
		}

		++x;
	}
}
