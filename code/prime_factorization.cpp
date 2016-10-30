#include <iostream>
#include <cmath>
#include <vector>

std::vector<int> prime_factorization(int p) {
    std::vector<int> factors;

        for (int i = 2; i <= sqrt(p) + 1; ++i) {
        if ( p % i == 0 ) {
            factors.push_back(i);
            while ( p % i == 0 ) {
                p /= i;
            }
        }
    }

    if ( p > 1 )
        factors.push_back(p);

    return factors;
}

int main(int argc, char *argv[]) {
    for (int i = 2; i < 25; ++i) {
        std::vector<int> w = prime_factorization(i);
        std::cout << i << ": ";
        for (int j = 0; j < (int)w.size(); ++j) {
            std::cout << w[j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
