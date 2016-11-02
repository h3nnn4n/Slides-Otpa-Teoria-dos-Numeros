#include <iostream>
#include <cmath>
#include <cstring>
#include <vector>

std::vector<int> prime_factorization(int n);

std::vector<int> get_primelist(int n) {
    bool prime[n+1];
    memset(prime, true, sizeof(prime));
    std::vector<int> factors;

    for ( int p = 2; p*p <= n; p++ ) {
        if ( prime[p] == true ) {
            for ( int i = p*2; i <= n; i += p ) {
                prime[i] = false;
            }
        }
    }

    for (int i = 2; i <= n; ++i) {
        if ( prime[i] )
            factors.push_back(i);
    }

    return factors;
}


int main(int argc, char *argv[]) {

    std::vector<int> primes = get_primelist(1000);

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
